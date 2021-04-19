#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_1_1/Goods.h"
#include "../Lab_1_1/Goods.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestCost)
		{
			double first = 10.02;
			int second = 1;
			Goods g;
			g.Init(first, second);
			Assert::AreEqual(10.02, g.cost(), 0.01);
		}
	};
}
