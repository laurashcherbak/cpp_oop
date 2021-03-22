﻿//////////////////////////////////////////////////////////////////////////////
// Fraction.cpp
#include "Fraction.h"
#include <sstream>
#include <iostream>

using namespace std;

string Fraction::toString() const
{
	stringstream sout;
	sout << exp.toString() << "." << GetFrac();
	return sout.str();
};

float Fraction::toFloat() const
{
	stringstream sout;
	sout << exp.GetNum() << "." << GetFrac();
	return atof(sout.str().c_str());
};

void Fraction::Init(string exp, unsigned int frac)
{
	this->exp.Init(exp);
	SetFrac(frac);
}

void Fraction::Read()
{
	DigitString exp;
	unsigned int frac;
	exp.Read();
	cout << "	Number.frac = ? "; cin >> frac;
	Init(exp.GetNum(), frac);
}

void Fraction::Display()
{
	cout << toString() << endl;
}

Fraction Add(const Fraction& a, const Fraction& b)
{
	Fraction r;
	stringstream sout;
	string e;
	unsigned int f;

	float d = a.toFloat() + b.toFloat();
	sout << d;
	string s = sout.str();
	int i = s.find('.');
	e = s.substr(0, i);
	f = atoi((s.substr(i + 1, s.length() - 1)).c_str());
	r.Init(e, f);
	return r;
}

Fraction Sub(const Fraction& a, const Fraction& b)
{
	Fraction r;
	stringstream sout;
	string e;
	unsigned int f;

	float d = a.toFloat() - b.toFloat();
	sout << d;
	string s = sout.str();
	int i = s.find('.');
	e = s.substr(0, i);
	f = atoi((s.substr(i + 1, s.length() - 1)).c_str());
	r.Init(e, f);
	return r;
}

Fraction Mul(const Fraction& a, const Fraction& b)
{
	Fraction r;
	stringstream sout;
	string e;
	unsigned int f;

	float d = a.toFloat() * b.toFloat();
	sout << d;
	string s = sout.str();
	int i = s.find('.');
	e = s.substr(0, i);
	f = atoi((s.substr(i + 1, s.length() - 1)).c_str());
	r.Init(e, f);
	return r;
}

Fraction Div(const Fraction& a, const Fraction& b)
{
	Fraction r;
	stringstream sout;
	string e;
	unsigned int f;

	float d = a.toFloat() / b.toFloat();
	sout << d;
	string s = sout.str();
	int i = s.find('.');
	e = s.substr(0, i);
	f = atoi((s.substr(i + 1, s.length() - 1)).c_str());
	r.Init(e, f);
	return r;
}

int Compare(const Fraction& a, const Fraction& b)
{
	if (a.toFloat() < b.toFloat())
		return 0;
	else if (a.toFloat() > b.toFloat())
		return 1;
	else
		return -1;

}

Fraction& Fraction::operator --() // префіксний декремент
{
	--frac; // модифікували поточний об'єкт
	return *this; // повернули модифікований об'єкт
}

Fraction& Fraction::operator ++() // префіксний інкремент
{
	++frac; // модифікували поточний об'єкт
	return *this; // повернули модифікований об'єкт
}

Fraction Fraction::operator --(int) // постфіксний декремент
{
	Fraction a(*this); // створили копію
	frac--; // модифікували поточний об'єкт
	return a; // повернули копію
}

Fraction Fraction::operator ++(int) // постфіксний інкремент
{
	Fraction a(*this); // створили копію
	frac++; // модифікували поточний об'єкт
	return a; // повернули копію
}

ostream& operator <<(ostream& out, const Fraction& f)
{
	return out << f.toString();
}

istream& operator >>(istream& in, Fraction& f)
{
	DigitString exp;
	unsigned int frac;
	in >> exp;
	f.SetExp(exp);
	cout << ".frac ? = "; in >> frac;
	f.SetFrac(frac);
	return in;
}

Fraction& Fraction::operator =(const Fraction& f)
{
	SetExp(f.GetExp());
	SetFrac(f.GetFrac());
	return *this; // повернули посилання на поточний об’єкт
}

Fraction::operator string() const
{
	return toString();
}
