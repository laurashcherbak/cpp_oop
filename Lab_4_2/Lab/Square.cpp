// Square.cpp
#include "Square.h"

Square::Square(void)
{}

Square::Square(int a, int b, int c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}

Square::~Square(void)
{}

bool Square::ExistsRoot() // y = a*x*x + b*x + c
{
	return (getB() * getB() - 4 * getA() * getC() >= 0);
}

ostream& operator <<(ostream& out, Square& v)
{
	return out << "y = " << v.getA() << "x^2 + " << v.getB() << "x + " << v.getC();
}
