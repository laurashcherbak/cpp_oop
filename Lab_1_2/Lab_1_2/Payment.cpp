//////////////////////////////////////////////////////////////////////////////
// Payment.cpp

#include "Payment.h"
#include <iostream>

void Payment::setFullName(string value)
{
	fullname = value;
}

bool Payment::setPrice(double value)
{
	if (value > 0)
	{
		price = value;
		return true;
	}
	else
	{
		price = -value;
		return false;
	}
}

bool Payment::setYear(int value)
{
	if (value > 0)
	{
		year = value;
		return true;
	}
	else
	{
		year = -value;
		return false;
	}
}

bool Payment::setPercentOA(double value)
{
	if (value > 0)
	{
		percentOfAllowance = value;
		return true;
	}
	else
	{
		percentOfAllowance = -value;
		return false;
	}
}

bool Payment::setIncomeTax(double value)
{
	if (value > 0)
	{
		incomeTax = value;
		return true;
	}
	else
	{
		incomeTax = -value;
		return false;
	}
}

bool Payment::setAmountOSD(int value)
{
	if (value > 0)
	{
		amountOfSpentDays = value;
		return true;
	}
	else
	{
		amountOfSpentDays = -value;
		return false;
	}
}

bool Payment::setAmountOWD(int value)
{
	if (value > 0)
	{
		amountOfWorkingDays = value;
		return true;
	}
	else
	{
		amountOfWorkingDays = -value;
		return false;
	}

}

bool Payment::setAccruedSum()
{
	// сума за відпрацьовані дні + надбавки(відсоток від 1 суми)
	double value;
	value = (price * amountOfSpentDays) +
		((price * amountOfSpentDays * percentOfAllowance) / 100);

	if (value > 0)
	{
		accruedSum = value;
		return true;
	}
	else
	{
		accruedSum = -value;
		return false;
	}
}

bool Payment::setHeldSum()
{
	// відрахування до пенсійного фонду
	// 1% від нарах суми + прибутковий податок (13% від нарах суми)
	double value;
	setAccruedSum();
	incomeTax = getAccruedSum() * 13 / 100;
	value = (getAccruedSum() / 100) + incomeTax;

	if (value > 0)
	{
		heldSum = value;
		return true;
	}
	else
	{
		heldSum = -value;
		return false;
	}
}

double Payment::getAccruedSum() 
{ 
	setAccruedSum(); 
	return accruedSum; 
}

double Payment::getHeldSum()
{
	setHeldSum();
	return heldSum;
}

/*double Payment::calculationASum()
{
	// сума за відпрацьовані дні + надбавки(відсоток від 1 суми)
	accruedSum = (price * amountOfSpentDays) + 
		((price * amountOfSpentDays * percentOfAllowance) / 100);
	return accruedSum;
}*/

/*double Payment::calculationHSum()
{
	// відрахування до пенсійного фонду
	// 1% від нарах суми + прибутковий податок (13% від нарах суми)
//	incomeTax = calculationASum() * 13 / 100;
//	heldSum = (calculationASum() / 100) + incomeTax;
	return 0;
}*/

double Payment::calculationSum()
{
	return getAccruedSum() - getHeldSum();
}

int Payment::calculationExperience()
{
	// 2021 - current year
	return 2021 - year;
}


bool Payment::Init(string fname, double pr, int yr, double percentOA, int amountOSD, int amountOWD)
{
	setFullName(fname);
	return setPrice(pr) && setYear(yr) && setPercentOA(percentOA) && setAmountOSD(amountOSD) && setAmountOWD(amountOWD);
}

void Payment::Read()
{
	string fname;
	double pr;
	int yr;
	double percentOA;
	int amountOSD;
	int amountOWD;

	cout << " Full name = ? "; cin >> fname;
	do
	{
		cout << " price = ? "; cin >> pr;
		cout << " year = ? "; cin >> yr;
		cout << " percentOfAllowance = ? "; cin >> percentOA;
		cout << " amountOfSpentDays = ? "; cin >> amountOSD;
		cout << " amountOfWorkingDays = ? "; cin >> amountOWD;
	} while (!Init(fname, pr, yr, percentOA, amountOSD, amountOWD));
}

void Payment::Display()
{
	cout << " Full name = ? " << fullname << endl;
	cout << " price = ? " << price << endl;
	cout << " year = ? " << year << endl;
	cout << " percentOfAllowance = ? " << percentOfAllowance << endl;
	cout << " amountOfSpentDays = ? " << amountOfSpentDays << endl;
	cout << " amountOfWorkingDays = ? " << amountOfWorkingDays << endl;

}
