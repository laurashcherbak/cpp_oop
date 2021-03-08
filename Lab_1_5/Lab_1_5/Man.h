//////////////////////////////////////////////////////////////////////////////
// Man.h
#pragma once
#include <string>

using namespace std;

class Man
{
private:
	string name;
	int age;
	char gender;
	double weight;

public:
	string GetName() const { return name; }
	int GetAge() const { return age; }
	char GetGender() const { return gender; }
	double GetWeight() const { return weight; }

	void SetName(string name) { this->name = name; }
	void SetAge(int age) { this->age = age; }
	void SetGender(char gender) { this->gender = gender; }
	void SetWeight(double weight) { this->weight = weight; }

	void Init(string name, int age, char gender, double weight);
	void Read();
	void Display() const;
	string toString() const;

};

