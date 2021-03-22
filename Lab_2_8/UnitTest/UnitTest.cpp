#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_1_7/Fraction.h"
#include "../Lab_1_7/Fraction.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestToString)
		{
			Fraction::DigitString ds;
			ds.Init("10");
			Assert::AreEqual("10", ds.toString().c_str());
		}
	};
}
