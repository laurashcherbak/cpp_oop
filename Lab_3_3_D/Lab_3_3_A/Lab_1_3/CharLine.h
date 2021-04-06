//////////////////////////////////////////////////////////////////////////////
// CharLine.h

#pragma once
//#pragma pack(push, 1)
#include <string>
//#include <iostream>
//#include <sstream>

using namespace std;

class CharLine
{
private:
	int N;
	char* s;

public:
	bool setN(int);
	bool setS(char*);
	int getN() const { return N; };
	char* getS() const { return s; };

	bool Init(int);
	void Read(int);
	void Display() const;
	void DisplaySn(int) const;
	bool CheckChar(char) const;
	friend CharLine Сoncatenation(const CharLine&, const CharLine&);
	friend bool CompareStr(const CharLine&, const CharLine&);
	bool CheckSubStr(string) const;
	string toString() const;

	CharLine();
	CharLine(const char*);
	CharLine(const char*, const int);
	CharLine(const CharLine&);
	~CharLine();

	CharLine& operator --();
	CharLine& operator ++();
	CharLine operator --(int);
	CharLine operator ++(int);

	friend ostream& operator <<(ostream&, const CharLine&);
	friend istream& operator >>(istream&, CharLine&);

	CharLine& operator =(const CharLine&);
	operator string() const;

};

//#pragma pack(pop)
