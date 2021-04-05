//////////////////////////////////////////////////////////////////////////////
// Source.cpp

#include <iostream>
#include "Factory.h"

using namespace std;


int main()
{
	cout << " : Lab 3.4 - Output : " << endl;
	Factory f;
	cin >> f;
	cout << f << endl;
	f.SetTriangle(f.GetTriangle().Move());
	f.SetQuadrate(f.GetQuadrate().Move());
	cout << f << endl;
	cout << "Squares of objects (triangle and triangle) are " << (Compare(f.GetTriangle(), f.GetTriangle()) ? " equal" : "not equal") << endl;
	cout << "Squares of objects (quadrateand quadrate) are " << (Compare(f.GetQuadrate(), f.GetQuadrate()) ? " equal" : "not equal") << endl;
	cout << "Squares of objects (triangle and quadrate) are " << (Compare(f, f) ? " equal" : "not equal") << endl;

	system("pause");

	return 0;
}
