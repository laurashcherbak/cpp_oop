//////////////////////////////////////////////////////////////////////////////
// Source.cpp

#include <iostream>
#include "Goods.h"

using namespace std;

Goods makeGoods(double f, int s)
{
	Goods g;
	if (!g.Init(f, s)) {
		cout << "Error" << endl;
		exit(0);
	}

	return g;
}

int main()
{
	Goods g;

	g.Read();
	g.Display();

	cout << "cost = " << g.cost() << endl;
	//cout << "size = " << sizeof(g) << endl;
	cout << endl;

	double f;
	int s;
	cout << "f = ? "; cin >> f;
	cout << "s = ? "; cin >> s;
	g = makeGoods(f, s);
	g.Display();


	return 0;
}