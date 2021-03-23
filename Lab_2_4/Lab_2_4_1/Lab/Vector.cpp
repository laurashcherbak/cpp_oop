//////////////////////////////////////////////////////////////////////////////
// Vector.cpp

#pragma once

#include "Vector.h"
#include <iostream>
#include <sstream>


Vector& Vector::operator --()
{
	int* m = new int[Size - 1];
	for (int i = 0; i < Size - 1; i++)
		m[i] = Arr[i];
	--Size;
	if (Arr)
		delete[] Arr;
	Arr = new int[Size];
	for (int i = 0; i < Size; i++)
		Arr[i] = 0;
	delete[] m;
	return *this;
}

Vector& Vector::operator ++()
{
	int* m = new int[Size];
	for (int i = 0; i < Size; i++)
		m[i] = Arr[i];
	++Size;
	if (Arr)
		delete[] Arr;
	Arr = new int[Size];
	for (int i = 0; i < Size - 1; i++)
		Arr[i] = 0;
	Arr[Size - 1] = 0;
	delete[] m;
	return *this;
}

Vector Vector::operator --(int)
{
	Vector a(*this);
	int* m = new int[Size - 1];
	for (int i = 0; i < Size - 1; i++)
		m[i] = Arr[i];
	Size--;
	if (Arr)
		delete[] Arr;
	Arr = new int[Size];
	for (int i = 0; i < Size; i++)
		Arr[i] = 0;
	delete[] m;
	return a;
}

Vector Vector::operator ++(int)
{
	Vector a(*this);
	int* m = new int[Size];
	for (int i = 0; i < Size; i++)
		m[i] = Arr[i];
	Size++;
	if (Arr)
		delete[] Arr;
	Arr = new int[Size];
	for (int i = 0; i < Size - 1; i++)
		Arr[i] = 0;
	Arr[Size - 1] = 0;
	delete[] m;
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

void Vector::Display() const
{
	cout << ToString() << endl;
}

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

