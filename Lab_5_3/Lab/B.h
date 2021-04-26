// B.h
#pragma once
#include "A.h"

class B
	: public A
{
	int y;

public:
	B(int x = 0, int y = 0)
		: A(x)
	{
		this->y = y;
	}
	B(A a)
	{
		throw a;
	}

};
