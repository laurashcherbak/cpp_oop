// Square.cpp
#include "Square.h"

Square::Square(void)
{}

Square::Square(int a, int b, int c)
	: ABase(a, b)
{
	this->c = c;
}

Square::~Square(void)
{}

bool Square::ExistsRoot() // y = a*x*x + b*x + c
{
	return (ABase::getB() * ABase::getB() - 4 * ABase::getA() * c >= 0);
}

ostream& operator <<(ostream& out, Square& v)
{
	return out << "y = " << v.ABase::getA() << "x^2 + " << v.ABase::getB() << "x + " << v.getC();
}
