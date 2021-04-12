// Square.h
#pragma once
#include "IBase.h"

class Square :
	public IBase
{
	int a, b, c;

public:
	Square(void);
	Square(int a, int b, int c);
	~Square(void);


	void setA(int c = 0) { this->a = a; }
	int getA() const { return a; }
	void setB(int b = 0) { this->b = b; }
	int getB() const { return b; }
	void setC(int c = 0) { this->c = c; }
	int getC() const { return c; }

	virtual bool ExistsRoot();

	friend ostream& operator <<(ostream& out, Square& v);
};
