#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_1_3/CharLine.h"
#include "../Lab_1_3/CharLine.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestToString)
		{
			CharLine c;
			c.Init(3);
			c.setS("abc");
			Assert::AreEqual("abc", c.toString().c_str());
		}
	};
}
