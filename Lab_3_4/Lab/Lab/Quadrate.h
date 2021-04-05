//////////////////////////////////////////////////////////////////////////////
// Quadrate.h
#pragma once

#include "Triangle.h"

class Quadrate :
    public Triangle
{
    private:
        int x4;
        int y4;
    public:
        int GetX4() const { return x4; };
        void SetX4(int val) { x4 = val; };
		int GetY4() const { return y4; };
		void SetY4(int val) { y4 = val; };

        string toString() const;

		Quadrate(const string id = "0", const string status = "created", const int x1 = 0, const int y1 = 0, const int x2 = 0, const int y2 = 0, const int x3 = 0, const int y3 = 0, const int x4 = 0, const int y4 = 0)
		{
			SetId(id);
			SetStatus(status);
			SetX1(x1);
			SetY1(y1);
			SetX2(x2);
			SetY2(y2);
			SetX3(x3);
			SetY3(y3);
			SetX4(x4);
			SetY4(y4);
		}

		Quadrate(const Quadrate& v)
		{
			SetId(v.GetId());
			SetStatus(v.GetStatus());
			SetX1(v.GetX1());
			SetY1(v.GetY1());
			SetX2(v.GetX2());
			SetY2(v.GetY2());
			SetX3(v.GetX3());
			SetY3(v.GetY3());
			SetX4(v.GetX4());
			SetY4(v.GetY4());
		}

		~Quadrate() {}

		friend ostream& operator <<(ostream& out, const Quadrate& v);
		friend istream& operator >>(istream& in, Quadrate& v);

		Quadrate& operator =(const Quadrate& v);

		float GetSquare() const;

		Quadrate& Move();
		friend bool Compare(const Quadrate& a, const Quadrate& b);

};

