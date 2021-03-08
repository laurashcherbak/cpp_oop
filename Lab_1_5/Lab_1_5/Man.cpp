//////////////////////////////////////////////////////////////////////////////
// Man.cpp
#include "Man.h"
#include <iostream>
#include <sstream>

using namespace std;

void Man::Init(string name, int age, char gender, double weight)
{
	SetName(name);
	SetAge(age);
	SetGender(gender);
	SetWeight(weight);
}

void Man::Display() const
{
	cout << endl;
	cout << "name = " << name << endl;
	cout << "age = " << age << endl;
	cout << "gender = " << gender << endl;
	cout << "weight = " << weight << endl;
}

void Man::Read()
{
	string name;
	int age;
	char gender;
	double weight;

	cout << endl;
	cout << "name = ? "; cin >> name;
	cout << "age = ? "; cin >> age;
	cout << "gender = ? "; cin >> gender;
	cout << "weight = ? "; cin >> weight;
	Init(name, age, gender, weight);
}

string Man::toString() const
{
	stringstream sout;
	sout << "	Name : " << GetName() << endl
		<< "	Age : " << GetAge() << endl
		<< "	Gender : " << GetGender() << endl
		<< "	Weight : " << GetWeight()
		;
	return sout.str();
}
