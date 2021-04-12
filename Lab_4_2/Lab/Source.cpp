// Source.cpp
#include <iostream>
#include "Line.h"
#include "Square.h"

using namespace std;

int main()
{

    Line l(1, 2);
    cout << typeid(l).name() << endl;
    cout << "Root(s) expression of " << l << (l.ExistsRoot() ? " " : " not ") << "exist." << endl;
    Square s(1, 4, 3);
    cout << typeid(s).name() << endl;
    cout << "Root(s) expression of " << s << (s.ExistsRoot() ? " " : " not ") << "exist." << endl;

    cout << endl;


    Line* l2 = new Line(0, 2);
    cout << typeid(*l2).name() << endl;
    cout << "Root(s) expression of " << (*l2) << ((*l2).ExistsRoot() ? " " : " not ") << "exist." << endl;
    Square* s2 = new Square(5, 1, 3);
    cout << typeid(*s2).name() << endl;
    cout << "Root(s) expression of " << (*s2) << ((*s2).ExistsRoot() ? " " : " not ") << "exist." << endl;
    delete l2;
    delete s2;

    cout << endl;


    IBase* b[2];

    b[0] = new Line(1, 2);
    cout << "Currect object type : " << typeid(*b[0]).name() << endl;
    cout << "Base object type : " << typeid(b[0]).name() << endl;
    cout << "Root(s) expression of " << (*((Line*)b[0])) << ((*b[0]).ExistsRoot() ? " " : " not ") << "exist." << endl;

    b[1] = new Square(1, 4, 3);
    cout << "Currect object type : " << typeid(*b[1]).name() << endl;
    cout << "Base object type : " << typeid(b[1]).name() << endl;
    cout << "Root(s) expression of " << (*((Square*)b[1])) << ((*b[1]).ExistsRoot() ? " " : " not ") << "exist." << endl;

    delete b[1];
    delete b[0];

    cout << endl;


	return 0;
}
