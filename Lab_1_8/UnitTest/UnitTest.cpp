//#ifndef _CRT_SECURE_NO_WARNINGS
//	#define _CRT_SECURE_NO_WARNINGS
//#endif // !#define _CRT_SECURE_NO_WARNINGS

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
			Fraction f;
			f.Init("10", 2);
			Assert::AreEqual("10.2", f.toString().c_str());
			//Assert::AreEqual((unsigned int)2, f.GetFrac());
		}
	};
}
