#pragma once
#include <string>

using namespace std;

class Vector
{
private:
	int Size;
	int* Arr;
	//double x, y, z;

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

	//void Init() { if (Arr) delete[] Arr;  Arr = new int[GetN()]; };
	//Vector() { Init(); SetN(0); SetNum({}); };
	//Vector(int N, int* Arr) { Init(); SetN(N); SetNum(Arr); };
	//Vector(const int N = 1, const int* Arr = {0}) : N(N), Arr(Arr) {};
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

	//double GetX() const { return x; }
	//double GetY() const { return y; }
	//double GetZ() const { return z; }

	//void SetX(double value) { x = value; }
	//void SetY(double value) { y = value; }
	//void SetZ(double value) { z = value; }

	string ToString() const;

	//bool Init(double x, double y, double z);
	//void Read();
	void Display() const;

	Vector MulToScalar(const int x) const;
	friend bool AreEqual(const Vector& a, const Vector& b);
	double Mod() const;

	//friend Vector Add(Vector l, Vector r);
	//friend Vector Subtract(Vector l, Vector r);
	//friend double ScalProd(Vector l, Vector r);
	//double Module();
	//friend double CosA(Vector l, Vector r);
};
