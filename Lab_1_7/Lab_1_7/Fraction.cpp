//////////////////////////////////////////////////////////////////////////////
// Fraction.cpp
#include "Fraction.h"
#include <sstream>
#include <iostream>
//#include <string>

using namespace std;

void Fraction::Init(string exp, unsigned int frac)
{
	this->exp.Init(exp);
	//this->exp.Init(exp.GetNum());
	//SetExp(exp);
	SetFrac(frac);
}

void Fraction::Read()
{
	DigitString exp;
	unsigned int frac;
	//cout << endl;
	exp.Read();
	cout << "	Number.frac = ? "; cin >> frac;
	Init(exp.GetNum(), frac);
}

void Fraction::Display()
{
	//cout << endl;
	GetExp().Display();
	cout << "	Number.frac = " << frac << endl;
}


string Fraction::toString() const 
{
	stringstream sout;
	//sout << exp.toString() << "	Number.frac = " << GetFrac() << endl;
	sout << exp.toString() << "." << GetFrac();
	return sout.str();
};

float Fraction::toFloat() const
{
	stringstream sout;
	sout << exp.GetNum() << "." << GetFrac();
	return atof(sout.str().c_str());
};

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
