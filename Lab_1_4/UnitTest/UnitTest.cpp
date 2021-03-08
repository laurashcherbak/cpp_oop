#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_1_4/Complex.h"
#include "../Lab_1_4/Complex.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestToString)
		{
			Complex c;
			c.Init(2, 1);
			Assert::AreEqual("2 + i * 1", c.toString().c_str());
		}
	};
}
