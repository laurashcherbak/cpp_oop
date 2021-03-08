#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab/Payment.h"
#include "../Lab/Payment.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestCalculationExperience)
		{
			//прізвище ім'я побатькові
			string fullname = "name";
			//ставка
			double price = 100;
			//рік поступлення на роботу
			int year = 2000;
			//відсоток надбавки
			double percentOfAllowance = 10;
			//кількість відпрацьованих днів в місяці
			int amountOfSpentDays = 5;
			//кількість робочих днів в місяці
			int amountOfWorkingDays = 5;
			Payment p;
			p.Init(fullname, price, year, percentOfAllowance, amountOfSpentDays, amountOfWorkingDays);
			Assert::AreEqual(21, p.calculationExperience());
		}
	};
}
