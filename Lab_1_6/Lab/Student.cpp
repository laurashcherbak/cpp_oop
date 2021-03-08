//////////////////////////////////////////////////////////////////////////////
// Student.cpp
// файл реалізації – реалізація методів класу
#include "Student.h"
#include <iostream>
#include <sstream>

using namespace std;

void Student::Init(int course, Student::Man man)
{
	SetCourse(course);
	SetMan(man);
}

void Student::Display() const
{
	cout << endl;
	cout << "Man : " << endl;
	man.Display(); // використовуємо делегування
	cout << "course = " << course << endl;
	//cout << endl;
}

void Student::Read()
{
	int c;
	Student::Man m;
	cout << endl;
	cout << "Man : " << endl;
	m.Read(); // використовуємо делегування
	cout << "course = ? "; cin >> c;
	Init(c, m);
}

string Student::toString() const
{
	stringstream sout;
	sout << GetMan().toString() << endl
		<< "Course : " << GetCourse();
	return sout.str();
}

void Student::Man::Init(string name, int age, char gender, double weight)
{
	SetName(name);
	SetAge(age);
	SetGender(gender);
	SetWeight(weight);
}

void Student::Man::Display() const
{
	cout << endl;
	cout << "	name = " << name << endl;
	cout << "	age = " << age << endl;
	cout << "	gender = " << gender << endl;
	cout << "	weight = " << weight << endl;
}

void Student::Man::Read()
{
	string name;
	int age;
	char gender;
	double weight;

	cout << endl;
	cout << "	name = ? "; cin >> name;
	cout << "	age = ? "; cin >> age;
	cout << "	gender = ? "; cin >> gender;
	cout << "	weight = ? "; cin >> weight;
	Init(name, age, gender, weight);
}

string Student::Man::toString() const
{
	stringstream sout;
	sout << "	Name : " << GetName() << endl
		<< "	Age : " << GetAge() << endl
		<< "	Gender : " << GetGender() << endl
		<< "	Weight : " << GetWeight();
	return sout.str();
}
