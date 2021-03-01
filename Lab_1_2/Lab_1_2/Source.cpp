//////////////////////////////////////////////////////////////////////////////
// Source.cpp

#include <iostream>
#include "Payment.h"

using namespace std;

Payment makePayment(string fname, double pr, int yr, double percentOA, int amountOSD, int amountOWD)
{
	Payment p;
	if (!p.Init(fname, pr, yr, percentOA, amountOSD, amountOWD))
	{
		cout << "Error" << endl;
		exit(0);
	}

	return p;
}

int main()
{
	Payment p;

	p.Read();
	p.Display();

	//p.setAccruedSum();
	cout << "calculationASum = " << p.getAccruedSum() << endl;
	//p.setHeldSum();
	cout << "calculationHSum = " << p.getHeldSum() << endl;
	cout << "calculationSum = " << p.calculationSum() << endl;
	cout << "calculationExperience = " << p.calculationExperience() << endl;
	cout << endl;

	string fname;
	double pr;
	int yr;
	double percentOA;
	int amountOSD;
	int amountOWD;

	cout << " Full name = ? "; cin >> fname;
	cout << " price = ? "; cin >> pr;
	cout << " year = ? "; cin >> yr;
	cout << " percentOfAllowance = ? "; cin >> percentOA;
	cout << " amountOfSpentDays = ? "; cin >> amountOSD;
	cout << " amountOfWorkingDays = ? "; cin >> amountOWD;

	p = makePayment(fname, pr, yr, percentOA, amountOSD, amountOWD);
	p.Display();

	return 0;
}
