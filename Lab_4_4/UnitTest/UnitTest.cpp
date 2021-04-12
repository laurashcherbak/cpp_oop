#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab/Triangle.h"
#include "../Lab/Triangle.cpp"
#include "../Lab/Equilateral.h"
#include "../Lab/Equilateral.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestPerimeter)
		{
			Equilateral e(10, 10, 60);
			Assert::AreEqual(30., e.Perimeter(), 0.1);
		}
	};
}
