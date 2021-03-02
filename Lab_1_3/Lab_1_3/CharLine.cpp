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

void CharLine::Display() const
{
	cout << "Display : ";
	for (int i = 0; i < N; i++)
	{
		cout << s[i];
	}
	cout << endl;
}

void CharLine::DisplaySn(int i) const
{
	cout << endl << "Display s[" << i << "] : " << s[i - 1] << endl;
}

string CharLine::toString() const
{
	return s;
}

bool CharLine::CheckChar(char ch) const
{
	return (strchr(s, ch) != NULL) ? true : false;
}

char* Сoncatenation(CharLine& s1, CharLine& s2)
{
	char* resStr = new char[strlen(s1.getS()) + strlen(s2.getS()) + 1];
	strcpy(resStr, s1.getS());
	strcat(resStr, s2.getS());
	s1.setS(resStr);
	return resStr;
}

bool CompareStr(CharLine s1, CharLine s2)
{
	return ((s1.toString().find(s2.toString()) > s1.getN()
		&& s2.toString().find(s1.toString()) > s2.getN()) ? true : false);
}

bool CharLine::CheckSubStr(string search) const
{
	return (toString().find(search) > 0 ? true : false);
}
