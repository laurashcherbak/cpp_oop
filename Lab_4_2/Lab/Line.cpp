// Line.cpp
#include "Line.h"

Line::Line(void)
{}

Line::~Line(void)
{}

Line::Line(int a, int b)
{
	this->a = a;
	this->b = b;
}

bool Line::ExistsRoot() // y = a*x + b
{
	return ((getA() == 0 && getB() == 0) || (getA() != 0));
}

ostream& operator <<(ostream& out, Line& v)
{
	return out << "y = " << v.getA() << "x + " << v.getB();
}
