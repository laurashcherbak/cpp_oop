//////////////////////////////////////////////////////////////////////////////
// D3.h

#pragma once
#include "D1.h"
#include "D2.h"

class D3 : private D1, public D2 
{
	int d3;

public:
	D3(int x = 0, int y = 0, int z = 0, int i = 0, int j = 0)
		: D1(y, z), D2(i, j)
	{
		d3 = x;
	}

	~D3()
	{}

	void show_D3()		
	{
		cout << "class D3:" << endl;
		show_D1();
		show_D2();
		cout << "show_D3()" << endl
		<< "D3::d3 = " << d3 << endl << endl;
	}
};
