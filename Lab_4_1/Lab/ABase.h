// ABase.h
#pragma once

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class ABase
{
	int a, b;

public:
	ABase(void);
	ABase(int a, int b);

	void setA(int a = 0) { this->a = a; }
	void setB(int b = 0) { this->b = b; }
	int getA() const { return a; }
	int getB() const { return b; }

	~ABase(void);

	virtual bool ExistsRoot() = 0;

};
