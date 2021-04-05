//////////////////////////////////////////////////////////////////////////////
// Quadrate.cpp
#include <sstream>
#include <iostream>
#include "Quadrate.h"

using namespace std;

string Quadrate::toString() const {
	stringstream sout;
	sout << "Quadrate " << GetId()
		<< " has been " << GetStatus()
		<< ". Current Coordinates ("
		<< "x1, y1 = " << GetX1()
		<< ", " << GetY1()
		<< "; x2, y2 = " << GetX2()
		<< ", " << GetY2()
		<< "; x3, y3 = " << GetX3()
		<< ", " << GetY3()
		<< "; x4, y4 = " << GetX4()
		<< ", " << GetY4()
		<< ")";
	return sout.str();
};

ostream& operator <<(ostream& out, const Quadrate& v)
{
	return out << v.toString();
}

istream& operator >>(istream& in, Quadrate& v)
{
	string s;
	int n;

	cout << ".id ? = "; in >> s;
	v.SetId(s);

	cout << ".x1 ? = "; in >> n;
	v.SetX1(n);
	cout << ".y1 ? = "; in >> n;
	v.SetY1(n);
	cout << ".x2 ? = "; in >> n;
	v.SetX2(n);
	cout << ".y2 ? = "; in >> n;
	v.SetY2(n);
	cout << ".x3 ? = "; in >> n;
	v.SetX3(n);
	cout << ".y3 ? = "; in >> n;
	v.SetY3(n);
	cout << ".x4 ? = "; in >> n;
	v.SetX4(n);
	cout << ".y4 ? = "; in >> n;
	v.SetY4(n);

	cout << endl;

	return in;
}

Quadrate& Quadrate::operator =(const Quadrate& v)
{
	SetId(v.GetId());
	SetStatus(v.GetStatus());
	SetX1(v.GetX1());
	SetX2(v.GetX2());
	SetX3(v.GetX3());
	SetX4(v.GetX4());
	SetY1(v.GetY1());
	SetY2(v.GetY2());
	SetY3(v.GetY3());
	SetY4(v.GetY4());

	return *this;
}

Quadrate& Quadrate::Move()
{
	SetX1(GetX1() + 1);
	SetX2(GetX2() + 1);
	SetX3(GetX3() + 1);
	SetX4(GetX4() + 1);
	SetStatus("moved");
	return *this;
}


float Quadrate::GetSquare() const
{
	return fabs((GetX2() - GetX1()) * (GetY3() - GetY2())); 

}

bool Compare(const Quadrate& a, const Quadrate& b)
{
	float aSquare = a.GetSquare();
	float bSquare = b.GetSquare();
	return (aSquare == bSquare);
}

