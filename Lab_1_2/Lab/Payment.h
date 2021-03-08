//////////////////////////////////////////////////////////////////////////////
// Payment.h

#pragma once
#include <string>

using namespace std;

class Payment
{
private:
	//прізвище ім'я побатькові
	string fullname;
	//ставка
	double price;
	//рік поступлення на роботу
	int year;
	//відсоток надбавки
	double percentOfAllowance;
	//прибутковий податок
	double incomeTax;
	//кількість відпрацьованих днів в місяці
	int amountOfSpentDays;
	//кількість робочих днів в місяці
	int amountOfWorkingDays;
	//нарахована і
	double accruedSum;
	//утримана суми
	double heldSum;
	

public:
	void setFullName(string);
	bool setPrice(double);
	bool setYear(int);
	bool setPercentOA(double);
	bool setIncomeTax(double);
	bool setAmountOSD(int);
	bool setAmountOWD(int);
	bool setAccruedSum();
	bool setHeldSum();

	string getFullName() const { return fullname; }
	double getPrice() const { return price; }
	int getYear() const { return year; }
	double getPercentOA() const { return percentOfAllowance; }
	double getIncomeTax() const { return incomeTax; }
	int getAmountOSD() const { return amountOfSpentDays; }
	int getAmountOWD() const { return amountOfWorkingDays; }
	double getAccruedSum();
	double getHeldSum();

	//обчислення нарахованої суми
	//double calculationASum();
	//обчислння утриманої суми
	//double calculationHSum();
	//обчислення суми, що видається на руки
	double calculationSum();
	//обчислення стажу
	int calculationExperience();


	bool Init(string fname, double pr, int yr, double percentOA, int amountOSD, int amountOWD);
	void Read();
	void Display();


};

