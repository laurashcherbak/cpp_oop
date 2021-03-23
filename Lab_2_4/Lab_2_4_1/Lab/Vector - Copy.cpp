#include "Vector.h"
#include <iostream>
#include <sstream>


Vector& Vector::operator --()
{
	--Size;
	return *this;
}

Vector& Vector::operator ++()
{
	++Size;
	Arr[GetSize() - 1] = 0;
	return *this;
}

Vector Vector::operator --(int)
{
	Vector a(*this);
	Size--;
	return a;
}

Vector Vector::operator ++(int)
{
	Vector a(*this);
	Size++;
	Arr[GetSize() - 1] = 0;
	return a;
}

Vector& Vector::operator = (const Vector& a)
{
	if (&a == this) return *this;
	Size = a.Size;
	if (Arr)
		delete[] Arr;
	Arr = new int[Size];
	for (int i = 0; i < Size; i++)
		Arr[i] = a.Arr[i];
	return *this;
}

int& Vector::operator [] (const int i)
{
	return Arr[i];
}

const int& Vector::operator [] (const int i) const
{
	return Arr[i];
}

ostream& operator << (ostream& out, const Vector& a)
{
	//for (int i = 0; i < a.Size; i++)
	//	out << "array[ " << i << " ] = " << a[i] << endl;
	//out << endl;

	int n = a.GetSize();
	out << "{";
	for (int i = 0; i < n; i++)
	{
		out << a[i];
		if (i < n - 1)
			out << ", ";
	}
	out << "}" << endl;

	return out;
}
istream& operator >> (istream& in, Vector& a)
{
	for (int i = 0; i < a.Size; i++)
	{
		cout << "array[ " << i << " ] = ? "; in >> a[i];
	}
	cout << endl;
	return in;
}

string Vector::ToString() const
{
	int n = GetSize();
	stringstream sout;
	sout << "{";
	for (int i = 0; i < n; i++)
	{
		sout << Arr[i];
		if (i < n - 1)
			sout << ", ";
	}
	sout << "}" << endl;

	//for (int i = 0; i < n; i++)
	//{
	//	sout << "array[ " << i << " ] = " << Arr[i] << endl;
	//}
	//sout << endl;

	return sout.str();
}

Vector::operator string() const
{
	return ToString();
}

//bool Vector::Init(double x, double y, double z)
//{
//	SetX(x);
//	SetY(y);
//	SetZ(z);
//	return true;
//}
//
//void Vector::Read()
//{
//	double X, Y, Z;
//	do
//	{
//		cout << "x = "; cin >> X;
//		cout << "y = "; cin >> Y;
//		cout << "z = "; cin >> Z;
//
//	} while (!Init(X, Y, Z));
//}

void Vector::Display() const
{
	cout << ToString() << endl;
}

//Vector Add(Vector l, Vector r)
//{
//	Vector tmp;
//	tmp.x = l.x + r.x;
//	tmp.y = l.y + r.y;
//	tmp.z = l.z + r.z;
//	return tmp;
//}
//
//Vector Subtract(Vector l, Vector r)
//{
//	Vector tmp;
//	tmp.x = l.x - r.x;
//	tmp.y = l.y - r.y;
//	tmp.z = l.z - r.z;
//	return tmp;
//}
//
//double ScalProd(Vector l, Vector r)
//{
//	double scal = (l.x * r.x) + (l.y * r.y) + (l.z * r.z);
//	return scal;
//}
//
//double Vector::Module()
//{
//	double mod = sqrt((x * x) + (y * y) + (z * z));
//	return mod;
//}
//
//double CosA(Vector l, Vector r)
//{
//	double cosA = ScalProd(l, r) / (l.Module() * r.Module());
//	return cosA;
//}


Vector Vector::MulToScalar(const int x) const
{
	Vector a(*this);
	for (int i = 0; i < GetSize(); i++)
	{
		a[i] = a[i] * x;
			
	}
	return a;
}

bool AreEqual(const Vector& a, const Vector& b)
{
	if (a.GetSize() != b.GetSize())
		return false;

	for (int i = 0; i < a.GetSize(); i++)
	{
		if (a[i] != b[i])
			return false;
	}

	return true;
}

double Vector::Mod() const
{
	double t = 0.0;
	for (int i = 0; i < GetSize(); i++)
	{
		t += (Arr[i] * Arr[i]);
	}

	return sqrt(t);
}
