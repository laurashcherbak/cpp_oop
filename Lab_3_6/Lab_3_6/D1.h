//////////////////////////////////////////////////////////////////////////////
// D1.h

#pragma once
#include "B1.h"

class D1 : public B1
{
	int d1;

public:
	D1(int x = 0, int y = 0)
		: B1(y)
	{
		d1 = x;
	}

	~D1()
	{}

	void show_D1()
	{
		cout << "class D1:" << endl;
		show_B1();
		cout << "show_D1()" << endl
			<< "D1::d1 = " << d1 << endl << endl;
	}

};
