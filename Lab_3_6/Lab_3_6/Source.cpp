//////////////////////////////////////////////////////////////////////////////
// Source.cpp

#include <iostream>
//#include <Windows.h>
#include "D3.h"

using namespace std;

int main()
{
	B1 o0(777);
	cout << "B1 o0(777);" << endl;
	cout << "sizeof(B1) = " << sizeof(B1) << endl;
	cout << endl << "Class hierarchy B1: " << endl;
	o0.show_B1();
	cout << endl;

	D1 o1(111, 222);
	cout << "D1 o1(111, 222);" << endl;
	cout << "sizeof(D1) = " << sizeof(D1) << endl;
	cout << endl << "Class hierarchy D1: " << endl;
	o1.show_D1();
	cout << endl;

	B2 o2(333);
	cout << "B2 o2(333);" << endl;
	cout << "sizeof(B1) = " << sizeof(B2) << endl;
	cout << endl << "Class hierarchy B2: " << endl;
	o2.show_B2();
	cout << endl;

	D2 o3(1000, 2000);
	cout << "D2 o2(1000, 2000);" << endl;
	cout << "sizeof(D2) = " << sizeof(D2) << endl;
	cout << endl << "Class hierarchy D2: " << endl;
	o3.show_D2();
	cout << endl;

	D3 o4(100, 200, 300, 400, 500);
	cout << "D3 o3(100, 200, 300, 400, 500);" << endl;
	cout << "sizeof(D3) = " << sizeof(D3) << endl;
	cout << endl << "Class hierarchy D3: " << endl;
	o4.show_D3();
	cout << endl;

	return 0;
}