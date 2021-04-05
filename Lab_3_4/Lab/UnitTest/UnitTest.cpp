#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab/Factory.h"
#include "../Lab/Factory.cpp"
#include "../Lab/Triangle.h"
#include "../Lab/Triangle.cpp"
#include "../Lab/Quadrate.h"
#include "../Lab/Quadrate.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestGetSquare)
		{
			Factory f;
			double t = f.GetTriangle().GetSquare();
			Assert::AreEqual(0.0, t, 0.01);
		}
	};
}
