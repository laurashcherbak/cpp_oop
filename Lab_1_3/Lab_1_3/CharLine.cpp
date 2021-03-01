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

bool CharLine::CheckChar(char ch)
{
	return (strchr(s, ch) != NULL) ? true : false;
}

char* CharLine::Сoncatenation(char *s1, char *s2)
{
	char* resStr = new char[strlen(s1) + strlen(s2) + 1];
	strcpy(resStr, s1);
	strcat(resStr, s2);
	setS(resStr);
	return resStr;
}

bool CharLine::CompareStr(CharLine s1, CharLine s2)
{
	return ((s1.toString().find(s2.toString()) > s1.getN()
		&& s2.toString().find(s1.toString()) > s2.getN()) ? true : false);
}

bool CharLine::CheckSubStr(string search)
{
	return (toString().find(search) > 0 ? true : false);
}
