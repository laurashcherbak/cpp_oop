//////////////////////////////////////////////////////////////////////////////
// Student.h
#pragma once
#include <string>
#include "Man.h"

using namespace std;

class Student
{
private:
	int course;
	Man man;

public:
	int GetCourse() const { return course; }
	Man GetMan() const { return man; }

	void SetCourse(int course) { this->course = course; }
	void SetMan(Man man) { this->man = man; }

	void Init(int course, Man man);
	void Display() const;
	void Read();
	string toString() const;

	void IncCourse() { this->course++; }
};
