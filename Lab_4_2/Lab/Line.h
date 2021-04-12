// Line.h
#pragma once
#include "IBase.h"

class Line :
	public IBase
{
	int a, b;

public:
	Line(void);
	Line(int a, int b);
	~Line(void);

	void setA(int a) { this->a = a; }
	int getA() { return a; }
	void setB(int b) { this->b = b; }
	int getB() { return b; }

	virtual bool ExistsRoot();

	friend ostream& operator <<(ostream& out, Line& v);
};
