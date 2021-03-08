//////////////////////////////////////////////////////////////////////////////
// Fraction.h
#pragma once
#include "DigitString.h"

using namespace std;

class Fraction
{
private:
	DigitString exp;
	unsigned int frac;

public:
	DigitString GetExp() const { return exp; }
	void SetExp(DigitString val) { exp = val; }
	unsigned GetFrac() const { return frac; }
	void SetFrac(unsigned int val) { frac = val; }

	void Init(string exp, unsigned int frac);
	void Read();
	void Display();

	string toString() const;
	float toFloat() const;

	friend Fraction Add(const Fraction& a, const Fraction& b);
	friend Fraction Sub(const Fraction& a, const Fraction& b);
	friend Fraction Mul(const Fraction& a, const Fraction& b);
	friend Fraction Div(const Fraction& a, const Fraction& b);
	friend int Compare(const Fraction& a, const Fraction& b);


};

