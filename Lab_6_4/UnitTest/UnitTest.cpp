#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab/Lab.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestIsNotOrdered)
		{
			int i1[] = { 1, 2, 3 };
			Assert::AreEqual(true, IsNotOrdered(i1, i1 + size(i1)));
		}
	};
}
