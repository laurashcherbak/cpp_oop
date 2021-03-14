//////////////////////////////////////////////////////////////////////////////
// CharLine.cpp
#ifndef _CRT_SECURE_NO_WARNINGS
	#define _CRT_SECURE_NO_WARNINGS
#endif // !#define _CRT_SECURE_NO_WARNINGS

#include "CharLine.h"
//#include <iostream>
//#include <sstream>
//#include <stdio.h>

CharLine::CharLine()
{
	int _N = 0;
	char* _s;
	_s = new char[_N + 1];
	strcpy(_s, "");
	setN(_N); setS(_s);
}

CharLine::CharLine(const char* s)
{
	int _N = strlen(s);
	cout << _N << endl;
	char* _s;
	_s = new char[_N + 1];
	strcpy(_s, s);
	setN(_N); setS(_s);
}

CharLine::CharLine(const char* s, int N)
{
	int _N = N;
	char* _s;
	_s = new char[_N + 1];
	strcpy(_s, s);
	setN(_N); setS(_s);
}

CharLine::CharLine(const CharLine& c)
{
	setN(c.N); setS(c.s);
}

bool CharLine::setN(int value)
{
	if (value >= 0)
	{
		N = value;
		return true;
	}
	else
		return false;
}

void CharLine::setS(char* value)
{
	// Set N based on lenght of str
	//setN(strlen(value));
	s = new char[N + 1];
	strcpy(s, value);
	//s = value;
	s[N] = '\0';
}

bool CharLine::Init(int N)
{
	setN(N);
	setS(s);
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
	stringstream sout;
	sout << "	N : " << getN() << endl
		//<< "	s : " << getS()
		<< "	s : \"" << getS() << "\""
		;
	return sout.str();
}

bool CharLine::CheckChar(char ch) const
{
	return (strchr(s, ch) != NULL) ? true : false;
}

CharLine Сoncatenation(const CharLine& s1, const CharLine& s2)
{
	CharLine r;
	char* _s1 = s1.getS();
	char* _s2 = s2.getS();
	char* resStr = new char[strlen(_s1) + strlen(_s2) + 1];
	strcpy(resStr, _s1);
	strcat(resStr, _s2);
	r.setS(resStr);
	return r;
}

bool CompareStr(const CharLine& s1, const CharLine& s2)
{
	stringstream sout1, sout2;
	sout1 << s1.getS();
	sout2 << s2.getS();
	return ((sout1.str().find(sout2.str()) > s1.getN()
		&& sout2.str().find(sout1.str()) > s2.getN()) ? true : false);
}

bool CharLine::CheckSubStr(string search) const
{
	stringstream sout1, sout2;
	sout1 << getS();
	return ((sout1.str()).find(search) > 0 ? true : false);
}


CharLine& CharLine::operator --() // префіксний декремент
{
	--N; // модифікували поточний об'єкт
	setS(getS());
	return *this; // повернули модифікований об'єкт
}

CharLine& CharLine::operator ++() // префіксний інкремент
{
	++N; // модифікували поточний об'єкт
	char* resStr = new char[N + 1];
	strcpy(resStr, getS());
	strcat(resStr, " ");
	setS(resStr);
	return *this; // повернули модифікований об'єкт
}

CharLine CharLine::operator --(int) // постфіксний декремент
{
	CharLine a(*this); // створили копію
	N--; // модифікували поточний об'єкт
	setS(getS());
	return a; // повернули копію
}

CharLine CharLine::operator ++(int) // постфіксний інкремент
{
	CharLine a(*this); // створили копію
	N++; // модифікували поточний об'єкт
	char* resStr = new char[N + 1];
	strcpy(resStr, getS());
	strcat(resStr, " ");
	setS(resStr);
	return a; // повернули копію
}

ostream& operator <<(ostream& out, const CharLine& c)
{
	return out << "	N : " << c.getN() << endl
		//<< "	s : " << c.getS() << endl;
		<< "	s : \"" << c.getS() << "\"" << endl;
}

istream& operator >>(istream& in, CharLine& c)
{
	int N;
	cout << ".N = "; in >> N;
	c.setN(N);
	char* _s;
	_s = new char[N + 1];
	cout << ".s = "; in >> _s;
	c.setS(_s);
	cout << endl;
	return in;
}

CharLine& CharLine::operator =(const CharLine& c)
{
	N = c.N; // змінили поле поточного об’єкта
	s = c.s; // змінили поле поточного об’єкта
	return *this; // повернули посилання на поточний об’єкт
}

CharLine::operator string() const
{
	stringstream sout;
	sout << "	N : " << getN() << endl
		//<< "	s : " << getS()
		<< "	s : \"" << getS() << "\""
		;
	return sout.str();
}
