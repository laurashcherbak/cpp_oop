//////////////////////////////////////////////////////////////////////////////
// CharLine.h

#pragma once
#include <string>

using namespace std;

class CharLine
{
private:
	int N;
	char *s;

public:
	bool setN(int value);
	void setS(char* value);
	int getN() const { return N; };
	char* getS() const { return s; };

	bool Init(int N);
	void Read(int N);
	void Display();
	void DisplaySn(int i);
	bool CheckChar(char ch);
	char* Сoncatenation(char* s1, char* s2);
	bool CompareStr(CharLine s1, CharLine s2);
	bool CheckSubStr(string search);
	string toString();

};
