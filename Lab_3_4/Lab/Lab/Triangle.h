//////////////////////////////////////////////////////////////////////////////
// Triangle.h
#pragma once

#include <string>

using namespace std;

class Triangle
{
	private:
		string id;
		string status;
		int x1;
		int x2;
		int x3;
		int y1;
		int y2;
		int y3;

	public:
		string GetId() const { return id; };
		void SetId(const string val) { id = val; };
		string GetStatus() const { return status; };
		void SetStatus(const string val) { status = val; };

		int GetX1() const { return x1; };
		void SetX1(const int val) { x1 = val; };
		int GetX2() const { return x2; };
		void SetX2(const int val) { x2 = val; };
		int GetX3() const { return x3; };
		void SetX3(int val) { x3 = val; };
		int GetY1() const { return y1; };
		void SetY1(int val) { y1 = val; };
		int GetY2() const { return y2; };
		void SetY2(int val) { y2 = val; };
		int GetY3() const { return y3; };
		void SetY3(int val) { y3 = val; };

		string toString() const;

		Triangle(const string id = "0", const string status = "created", const int x1 = 0, const int y1 = 0, const int x2 = 0, const int y2 = 0, const int x3 = 0, const int y3 = 0)
		{
			SetId(id);
			SetStatus(status);
			SetX1(x1);
			SetY1(y1);
			SetX2(x2);
			SetY2(y2);
			SetX3(x3);
			SetY3(y3);
		}
		Triangle(const Triangle& v)
		{
			SetId(v.GetId());
			SetStatus(v.GetStatus());
			SetX1(v.GetX1());
			SetY1(v.GetY1());
			SetX2(v.GetX2());
			SetY2(v.GetY2());
			SetX3(v.GetX3());
			SetY3(v.GetY3());
		}

		~Triangle() {}

		friend ostream& operator <<(ostream& out, const Triangle& v);
		friend istream& operator >>(istream& in, Triangle& v);

		Triangle& operator =(const Triangle& v);

		float GetSquare() const;

		Triangle& Move();
		friend bool Compare(const Triangle& a, const Triangle& b);

};

