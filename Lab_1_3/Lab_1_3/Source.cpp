//////////////////////////////////////////////////////////////////////////////
// Source.cpp
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif // !#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "CharLine.h"

int main()
{
	CharLine c;
	int N;
	cout << "Enter N : ";
	cin >> N;
	c.Read(N);
	c.Display();
	cout << "toString() = " << c.toString();

	c.DisplaySn(2);

	char ch;
	cout << "Enter symbol for test : ";
	cin >> ch;
	c.CheckChar(ch);

	CharLine c2;
	c2.Init(5);
	c2.Read(5);
	c.Сoncatenation(c.getS(), c2.getS());

	c.CompareStr(c, c2);
	c.CheckSubStr(c2.getS());

	return 0;
}