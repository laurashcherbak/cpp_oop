//////////////////////////////////////////////////////////////////////////////
// CharLine.cpp
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif // !#define _CRT_SECURE_NO_WARNINGS

#include "CharLine.h"
#include <iostream>
#include <stdio.h>

bool CharLine::setN(int value)
{
	if (value > 0)
	{
		N = value;
		return true;
	}
	else
		return false;
}

void CharLine::setS(char* value)
{
	setN(strlen(value));
	s = new char[N];
	s = value;
}

bool CharLine::Init(int N)
{
	setN(N);
	s = new char[N];
	return true;
}

void CharLine::Read(int N)
{
	Init(N);
	cout << "Input string : ";
	int i = 0;
	do {
		cin >> s[i];
		i++;
	} while (i < N);
	s[i] = '\0';
}

void CharLine::Display()
{
	cout << "Display : ";
	for (int i = 0; i < N; i++)
	{
		cout << s[i];
	}
	cout << endl;
}

void CharLine::DisplaySn(int i)
{
	cout << endl << "Display s[" << i << "] : " << s[i - 1] << endl;
}

string CharLine::toString()
{
	return s;
}

void CharLine::CheckChar(char ch)
{
	cout << "Symbol '" << ch << "' "
		<< ((strchr(s, ch) != NULL) ? "exists" : "not exist")
		<< " in the String" << endl;
}

void CharLine::Сoncatenation(char *s1, char *s2)
{
	char* resStr = new char[strlen(s1) + strlen(s2) + 1];
	strcpy(resStr, s1);
	strcat(resStr, s2);
	cout << "Concatenation strings : " << resStr << endl;

	setS(resStr);
}

void CharLine::CompareStr(CharLine s1, CharLine s2)
{
	cout << " Strings '" << s1.getS() << "' and '" << s2.getS() << "' are "
		<< ((s1.toString().find(s2.toString()) > s1.getN()
			&& s2.toString().find(s1.toString()) > s2.getN()) ? "" : "not ")
		<< "equal" << endl;
}

void CharLine::CheckSubStr(string search)
{
	cout << " Substring '" << search << "' is "
		<< (toString().find(search) > 0 ? "" : "not ")
		<< "found in the String '" << getS() << "'" << endl;
}
