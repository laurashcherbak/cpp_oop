#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab/Lab.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestAVG)
		{
			int n = 5;
			array<int, 100> arr = { 0 };
			arr = { 1, 2, 3, 4, 5 };
			Assert::AreEqual(3., avg(arr, n), 0.1);
		}
	};
}
