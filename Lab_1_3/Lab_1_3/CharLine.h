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
	void Display() const;
	void DisplaySn(int i) const;
	bool CheckChar(char ch) const;
	friend char* Сoncatenation(CharLine& s1, CharLine& s2);
	friend bool CompareStr(CharLine s1, CharLine s2);
	bool CheckSubStr(string search) const;
	string toString() const;

};
