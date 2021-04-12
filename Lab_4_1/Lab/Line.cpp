// Line.cpp
#include "Line.h"

Line::Line(void)
{}

Line::Line(const int a = 0, const int b = 0)
	: ABase(a, b)
{}

Line::~Line(void)
{}

bool Line::ExistsRoot() // y = a*x + b
{
	return ((ABase::getA() == 0 && ABase::getB() == 0) || (ABase::getA() != 0));
}

ostream& operator <<(ostream& out, Line& v)
{
	return out << "y = " << v.ABase::getA() << "x + " << v.ABase::getB();
}
