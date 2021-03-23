//////////////////////////////////////////////////////////////////////////////
// Vector.h
#pragma once
#include <string>
//#pragma pack(push, 1)


using namespace std;

class Vector
{
private:
	int Size;
	int* Arr;

public:
	int GetSize() const { return Size; };
	void SetSize(const int val) { Size = val; };
	int* GetNum() { return Arr; };
	//void SetNum(int* val) { for (int i = 0; i < GetN(); i++) { Arr[i] = val[i]; }; };

	Vector(int Size = 1)
		: Size(Size)
	{
		Arr = new int[Size];
		for (int i = 0; i < Size; i++)
			Arr[i] = 0;
	}

	Vector(const Vector& a)
		: Size(a.Size)
	{
		Arr = new int[Size];
		for (int i = 0; i < Size; i++)
			Arr[i] = a.Arr[i];

	}

	~Vector() { delete[] Arr; };

	Vector& operator --();
	Vector& operator ++();
	Vector operator --(int);
	Vector operator ++(int);
	Vector& operator = (const Vector& a);
	int& operator [] (const int i);
	const int& operator [] (const int i) const;
	friend ostream& operator << (ostream& out, const Vector& a);
	friend istream& operator >> (istream& in, Vector& a);
	operator string() const;

	string ToString() const;
	void Display() const;

	Vector MulToScalar(const int x) const;
	friend bool AreEqual(const Vector& a, const Vector& b);
	double Mod() const;
};

//#pragma pack(pop)
