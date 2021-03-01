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
	cout << "Symbol '" << ch << "' "
		<< (c.CheckChar(ch) ? "exists" : "not exist")
		<< " in the String" << endl;

	CharLine c2;
	c2.Init(5);
	c2.Read(5);
	cout << "Concatenation strings : " << c.Сoncatenation(c.getS(), c2.getS()) << endl;


	cout << " Strings '" << c.getS() << "' and '" << c2.getS() << "' are "
		<< (c.CompareStr(c, c2) ? "" : "not ")
		<< "equal" << endl;

	cout << " Substring '" << c2.getS() << "' is "
		<< (c.CheckSubStr(c2.getS()) ? "" : "not ")
		<< "found in the String '" << c.getS() << "'" << endl;

	return 0;
}