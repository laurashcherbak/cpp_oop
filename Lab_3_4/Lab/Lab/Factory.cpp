//////////////////////////////////////////////////////////////////////////////
// Factory.cpp
#include <iostream>
#include "Factory.h"

using namespace std;

ostream& operator <<(ostream& out, const Factory& v)
{
	Triangle _t = v.GetTriangle();
	Quadrate _q = v.GetQuadrate();
	return out
		<< " : Triangle : " << endl << _t.toString() << endl
		<< " : Quadrate : " << endl << _q.toString() << endl
		;
}

istream& operator >>(istream& in, Factory& v)
{
	Triangle _t;
	Quadrate _q;
	cout << " : Triangle : " << endl; in >> _t;
	v.SetTriangle(_t);
	cout << " : Quadrate : " << endl; in >> _q;
	v.SetQuadrate(_q);
	return in;
}

bool Compare(const Factory& a, const Factory& b)
{
	float aSquare = a.GetTriangle().GetSquare();
	float bSquare = a.GetQuadrate().GetSquare();
	return (aSquare == bSquare);
}

