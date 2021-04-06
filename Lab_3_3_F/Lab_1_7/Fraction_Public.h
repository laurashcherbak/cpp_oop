//////////////////////////////////////////////////////////////////////////////
// Fraction_Public.h
#pragma once
#include "DigitString.h"
//#pragma pack(push, 1)

using namespace std;

class Fraction_Public
	: public DigitString
{
private:
	//DigitString exp;
	unsigned int frac;

public:
	DigitString GetExp() const
	{
		return this->GetNum();
	}

	void SetExp(DigitString exp)
	{
		this->SetNum(exp.GetNum());
	}

	unsigned GetFrac() const { return frac; }
	void SetFrac(unsigned int val) { frac = val; }

	string toString() const;
	float toFloat() const;

	void Init(string exp, unsigned int frac);
	void Read();
	void Display();

	friend Fraction_Public Add(const Fraction_Public& a, const Fraction_Public& b);
	friend Fraction_Public Sub(const Fraction_Public& a, const Fraction_Public& b);
	friend Fraction_Public Mul(const Fraction_Public& a, const Fraction_Public& b);
	friend Fraction_Public Div(const Fraction_Public& a, const Fraction_Public& b);
	friend int Compare(const Fraction_Public& a, const Fraction_Public& b);

	Fraction_Public(const string num = "0", const unsigned int frac = 0)
	{
		this->SetNum(num);
		SetFrac(frac);
	}
	Fraction_Public(const Fraction_Public& f) { Init(f.GetNum(), f.frac); }

	Fraction_Public& operator --();
	Fraction_Public& operator ++();
	Fraction_Public operator --(int);
	Fraction_Public operator ++(int);

	friend ostream& operator <<(ostream& out, const Fraction_Public& f);
	friend istream& operator >>(istream& in, Fraction_Public& f);

	Fraction_Public& operator =(const Fraction_Public& f);

	operator string() const;

	friend Fraction_Public operator +(const Fraction_Public& a, const Fraction_Public& b);
	friend Fraction_Public operator -(const Fraction_Public& a, const Fraction_Public& b);
	friend Fraction_Public operator *(const Fraction_Public& a, const Fraction_Public& b);
	friend Fraction_Public operator /(const Fraction_Public& a, const Fraction_Public& b);

	friend bool operator ==(Fraction_Public a, Fraction_Public& b);
	friend bool operator !=(Fraction_Public a, Fraction_Public& b);
	friend bool operator >=(Fraction_Public a, Fraction_Public& b);
	friend bool operator >(Fraction_Public a, Fraction_Public& b);
	friend bool operator <=(Fraction_Public a, Fraction_Public& b);
	friend bool operator <(Fraction_Public a, Fraction_Public& b);

};

//#pragma pack(pop)
