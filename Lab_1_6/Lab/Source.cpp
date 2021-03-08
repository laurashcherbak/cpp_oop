//////////////////////////////////////////////////////////////////////////////
// Source.cpp
#include <iostream>
#include "Student.h"

using namespace std;

int main()
{
	Student s;
	cout << "Enter data : ";
	s.Read();
	cout << "Print data : ";
	s.Display();


	Student::Man m = s.GetMan();
	string name;
	int age;
	double weight;

	cout << "Enter New Student Name = ? ";
	cin >> name;
	m.SetName(name);

	cout << "Enter New Student Age = ? ";
	cin >> age;
	m.SetAge(age);

	cout << "Enter New Student Weight = ? ";
	cin >> weight;
	m.SetWeight(weight);

	s.SetMan(m);
	cout << "Student information changed : " << endl << s.toString() << endl;

	int course;
	cout << "Enter New Course = ? ";
	cin >> course;
	s.SetCourse(course);
	cout << "Student information changed : " << endl << s.toString() << endl;

	cout << "Increment Course...";
	s.IncCourse();
	//cout << endl << "Course changed to : " << endl << s.toString() << endl;
	cout << endl << "Course changed to : " << endl << s.GetCourse() << endl;

	return 0;
}
