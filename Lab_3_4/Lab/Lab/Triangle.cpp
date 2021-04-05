//////////////////////////////////////////////////////////////////////////////
// Triangle.cpp
#include <sstream>
#include <iostream>
#include "Triangle.h"

using namespace std;

string Triangle::toString() const {
	stringstream sout;
	sout << "Triangle " << GetId()
		<< " has been " << GetStatus()
		<< ". Current Coordinates ("
		<< "x1, y1 = " << GetX1()
		<< ", " << GetY1()
		<< "; x2, y2 = " << GetX2()
		<< ", " << GetY2()
		<< "; x3, y3 = " << GetX3()
		<< ", " << GetY3()
		<< ")";
	return sout.str();
};

ostream& operator <<(ostream& out, const Triangle& v)
{
	return out << v.toString();
}

istream& operator >>(istream& in, Triangle& v)
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

	cout << endl;
	
	return in;
}

Triangle& Triangle::operator =(const Triangle& v)
{
	SetId(v.GetId());
	SetStatus(v.GetStatus());
	SetX1(v.GetX1());
	SetX2(v.GetX2());
	SetX3(v.GetX3());
	SetY1(v.GetY1());
	SetY2(v.GetY2());
	SetY3(v.GetY3());

	return *this;
}

Triangle& Triangle::Move()
{
	SetX1(GetX1() + 1);
	SetX2(GetX2() + 1);
	SetX3(GetX3() + 1);
	SetStatus("moved");
	return *this;
}

float Triangle::GetSquare() const
{
	//S = a * b / 2
	return fabs((GetX2() - GetX1()) * (GetY3() - GetY1()) - (GetX3() - GetX1()) * (GetY2() - GetY1())) / 2;
}

bool Compare(const Triangle& a, const Triangle& b)
{
	float aSquare = a.GetSquare();//fabs((a.x2 - a.x1) * (a.y3 - a.y1) - (a.x3 - a.x1) * (a.y2 - a.y1)) / 2;
	float bSquare = b.GetSquare();//fabs((b.x2 - b.x1) * (b.y3 - b.y1) - (b.x3 - b.x1) * (b.y2 - b.y1)) / 2;
	return (aSquare == bSquare);
}

