// Square.h
#pragma once
#include "ABase.h"

class Square :
	public ABase
{
	int c;

public:
	Square(void);
	Square(int a, int b, int c);
	~Square(void);

	void setC(int c = 0) { this->c = c; }
	int getC() const { return c; }

	virtual bool ExistsRoot();

	friend ostream& operator <<(ostream& out, Square& v);
};
