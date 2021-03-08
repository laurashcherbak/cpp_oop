//////////////////////////////////////////////////////////////////////////////
// Student.cpp
// файл реалізації – реалізація методів класу
#include "Student.h"
#include <iostream>
#include <sstream>

using namespace std;

void Student::Init(int course, Man man)
{
	SetCourse(course);
	SetMan(man);
}

void Student::Display() const
{
	cout << endl;
	cout << "man = " << endl;
	man.Display(); // використовуємо делегування
	cout << "course = " << course << endl;
}

void Student::Read()
{
	int c;
	Man m;
	cout << endl;
	cout << "Man = ? " << endl;
	m.Read(); // використовуємо делегування
	cout << "course = ? "; cin >> c;
	Init(c, m);
}

string Student::toString() const
{
	stringstream sout;
	sout << GetMan().toString() << endl
		<< "	Course : " << GetCourse()
		;
	return sout.str();
}
