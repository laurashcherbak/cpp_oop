#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_1_5/Man.h"
#include "../Lab_1_5/Man.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestToString)
		{
			Man m;
			m.Init("name", 20, 'm', 50.5);
			Assert::AreEqual("	Name : name\n	Age : 20\n	Gender : m\n	Weight : 50.5", m.toString().c_str());
		}
	};
}
