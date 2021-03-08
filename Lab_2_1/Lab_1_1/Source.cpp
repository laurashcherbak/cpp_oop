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
	cout << " : Lab 2.1 - Output : ";

	cout << " : constructors : " << endl;
	cout << "Goods *a0 = new Goods(); : " << endl;
	Goods* a0 = new Goods();
	//(*a0).Display();
	cout << " a0 : " << (*a0) << endl;
	cout << "Goods a1; : " << endl;
	Goods a1;
	//a1.Display();
	cout << " a1 : " << a1 << endl;
	cout << "Goods a2(2.5); : " << endl;
	Goods a2(2.5);
	//a2.Display();
	cout << " a2 : " << a2 << endl;
	cout << "Goods c(3.5, 10); : " << endl;
	Goods c(3.5, 10);
	c.Display();
	cout << " c : " << c << endl;
	cout << "Goods d(c); : " << endl;
	Goods d(c);
	d.Display();
	cout << " d : " << d << endl;
	cout << endl;

	cout << " : operator increment/decrement : " << endl;
	cout << "++c : " << ++c << endl;
	cout << " c : " << c << endl;
	cout << " c++ : " << c++ << endl;
	cout << " c : " << c << endl;
	cout << "--c : " << --c << endl;
	cout << " c : " << c << endl;
	cout << " c-- : " << c-- << endl;
	cout << " c : " << c << endl;
	cout << endl;

	cout << " : operator Type() : " << endl;
	//cout << double(c) << endl;
	//cout << int(c) << endl;
	cout << "string(c) : " << string(c) << endl;
	cout << endl;

	cout << " : operator input/output : " << endl;
	Goods g1, g2, g3;
	cin >> g1 >> g2 >> g3;
	cout << g1 << g2 << g3 << endl;

	cout << " : operator = : " << endl;
	g3 = g2 = c;
	cout << " g3 : " << c << endl;
	cout << " g2 : " << c << endl;
	cout << " c : " << c << endl;
	cout << endl;

	cout << " : Size = " << sizeof(c) << endl;

	system("pause");

	cout << " : Lab 1.1 - Output : ";

	Goods g;
	g.Read();
	g.Display();
	cout << "Cost = " << g.cost() << endl;
	//cout << "Size = " << sizeof(g) << endl;
	cout << endl;

	double f;
	int s;
	cout << "f = ? "; cin >> f;
	cout << "s = ? "; cin >> s;
	g = makeGoods(f, s);
	g.Display();

	return 0;
}