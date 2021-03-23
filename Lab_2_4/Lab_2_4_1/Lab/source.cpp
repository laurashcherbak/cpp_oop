//////////////////////////////////////////////////////////////////////////////
// Source.cpp
#include "Vector.h"
#include <iostream>

int main()
{

	cout << " : Lab 2.1 - Output : ";

	cout << " : constructors : " << endl;
	cout << "Vector *a0 = new Vector(); : " << endl;
	Vector* a0 = new Vector();
	cout << (*a0) << endl;
	cout << "(*a0).Display(); : " << endl;
	(*a0).Display();
	cout << endl;
	cout << "Vector a1; : " << endl;
	Vector a1;
	//a1.Display();
	cout << a1 << endl;
	cout << "Vector a2(1); : " << endl;
	Vector a2(1);
	//a2.Display();
	cout << a2 << endl;
	cout << "Vector c(3); : " << endl;
	Vector c(3);
	//c.Display();
	cout << c << endl;
	cout << "Vector d(c); : " << endl;
	Vector d(c);
	//d.Display();
	cout << d << endl;
	cout << endl;

	cout << "c[2] : " << c[2] << endl;
	cout << endl;

	cout << " : operator increment/decrement : " << endl;
	cout << "++c : " << endl << ++c << endl;
	cout << " c : " << endl << c << endl;
	cout << " c++ : " << endl << c++ << endl;
	cout << " c : " << endl << c << endl;
	cout << "--c : " << endl << --c << endl;
	cout << " c : " << endl << c << endl;
	cout << " c-- : " << endl << c-- << endl;
	cout << " c : " << endl << c << endl;
	cout << endl;

	cout << " : operator Type() : " << endl;
	cout << "string(c) : " << endl << string(c) << endl;
	cout << endl;

	cout << " : operator input/output (Vector g1, g2(2), g3(3)): " << endl;
	Vector g1, g2(2), g3(3);
	cin >> g1 >> g2 >> g3;
	cout << "g1 : " << g1 << "g2 : " << g2 << "g3 : " << g3 << endl;

	cout << " : operator = : " << endl;
	d = g2 = g3;
	cout << " g3 : " << g3 << endl;
	cout << " g2 : " << g2 << endl;
	cout << " d : " << d << endl;
	cout << endl;

	g3 = d.MulToScalar(10);
	cout << "Mul Vector to Scalar : g3 = d.MulToScalar(10) : " << g3 << endl;
	cout << endl;
	cout << "Compare Vectors : " << endl << "Vectors d and g3 are " << (AreEqual(d, g3) ? "" : "not ") << "equal" << endl;
	cout << endl;
	cout << "d.Mod() : " << d.Mod() << endl;
	cout << endl;

	cout << " : Size = " << sizeof(c) << endl;

	system("pause");

	return 0;
}
