//////////////////////////////////////////////////////////////////////////////
// D2.h

#pragma once
#include "B2.h"

class D2 : private B2
{
	int d2;

public:
	D2(int x = 0, int y = 0)
		: B2(y)
	{
		d2 = x;
	}

	~D2()
	{}

	void show_D2()
	{
		cout << "class D2:" << endl;
		show_B2();
		cout << "show_D2()" << endl
			<< "D2::d2 = " << d2 << endl << endl;
	}

};
