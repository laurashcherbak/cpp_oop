#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestDisc)
		{
			Assert::AreEqual(1., disc(1, 3, 2), 0.1);
		}
	};
}
