//////////////////////////////////////////////////////////////////////////////
// DigitString.h
#pragma once
#include <string>

using namespace std;

class DigitString
{
private:
	string num;

public:
	string GetNum() const { return num; };
	void SetNum(string val) { num = val; };

	void Init(string num);
	void Read();
	void Display();

	string toString() const;
	int toInt() const { return atoi(GetNum().c_str()); };

	friend DigitString Add(const DigitString& a, const DigitString& b);
	friend DigitString Sub(const DigitString& a, const DigitString& b);
	friend DigitString Mul(const DigitString& a, const DigitString& b);
	friend DigitString Div(const DigitString& a, const DigitString& b);
	friend int Compare(const DigitString& a, const DigitString& b);

};

