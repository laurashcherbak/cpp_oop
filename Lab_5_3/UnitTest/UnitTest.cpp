#include "pch.h"
#include "CppUnitTest.h"
//#include "../Lab/B.h"
//#include "../Lab/B.cpp"
//#include "../Lab/A.h"
//#include "../Lab/A.cpp"
#include "../Lab/Lab.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	//A a(1);
	//B b(2, 3);

	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestTaskFailed)
		{
			Assert::AreEqual(2, task());
		}
	};
}
