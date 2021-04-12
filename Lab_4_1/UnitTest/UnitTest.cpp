#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab/ABase.h"
#include "../Lab/ABase.cpp"
#include "../Lab/Line.h"
#include "../Lab/Line.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestExistsRoot)
		{
			Line l(1, 2);
			Assert::AreEqual(true, l.ExistsRoot());
		}
	};
}
