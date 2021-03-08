//////////////////////////////////////////////////////////////////////////////
// Goods.h

#pragma once
//#pragma pack(push, 1)
//#pragma pack(1)
#include <string>

using namespace std;

class Goods
{
private:
	double first;
	int second;

public:
	double GetFirst() const;
	int GetSecond() const;
	bool SetFirst(double value);
	bool SetSecond(int value);

	bool Init(double first, int second);
	void Read();
	void Display();

	Goods() { SetFirst(0); SetSecond(0); }
	Goods(double first) { SetFirst(first); SetSecond(0); }
	Goods(double first, int second) { SetFirst(first); SetSecond(second); }
	Goods(const Goods &g) { SetFirst(g.first); SetSecond(g.second); }

	double cost();

	Goods& operator --();
	Goods& operator ++();
	Goods operator --(int);
	Goods operator ++(int);

	friend ostream& operator <<(ostream &out, const Goods &g);
	friend istream& operator >>(istream &in, Goods &g);

	Goods& operator =(const Goods &g);

	//operator double() const;
	//operator int() const;
	operator string() const;

	string toString() const;


};

//#pragma pack(pop)
