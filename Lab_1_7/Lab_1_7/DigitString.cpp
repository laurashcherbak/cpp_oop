//////////////////////////////////////////////////////////////////////////////
// DigitString.cpp
#include "DigitString.h"
#include <sstream>
#include <iostream>

void DigitString::Init(string num)
{
	SetNum(num);
}

void DigitString::Read()
{
	string num;
	cout << "	Number.exp = ? "; cin >> num;
	Init(num);
}

void DigitString::Display()
{
	cout << "	Number.exp = " << num << endl;
}

string DigitString::toString() const {
	stringstream sout;
	//sout << "	Number.exp = " << GetNum() << endl;
	sout << GetNum();
	return sout.str();
};

DigitString Add(const DigitString& a, const DigitString& b)
{
	DigitString r;
	stringstream sout;
	sout << (a.toInt() + b.toInt());
	r.SetNum(sout.str());
	return r;
}

DigitString Sub(const DigitString& a, const DigitString& b)
{
	DigitString r;
	stringstream sout;
	sout << a.toInt() - b.toInt();
	r.SetNum(sout.str());
	return r;
}

DigitString Mul(const DigitString& a, const DigitString& b)
{
	DigitString r;
	stringstream sout;
	sout << a.toInt() * b.toInt();
	r.SetNum(sout.str());
	return r;
}

DigitString Div(const DigitString& a, const DigitString& b)
{
	DigitString r;
	stringstream sout;
	sout << a.toInt() / b.toInt();
	r.SetNum(sout.str());
	return r;
}

int Compare(const DigitString& a, const DigitString& b)
{
	if (a.toInt() < b.toInt())
		return 0;
	else if (a.toInt() > b.toInt())
		return 1;
	else
		return -1;
}
