#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab/Vector.h"
#include "../Lab/Vector.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestFirstElemOfArray)
		{
			Vector a(1);
			Assert::AreEqual(0, a[0]);
		}
	};
}
