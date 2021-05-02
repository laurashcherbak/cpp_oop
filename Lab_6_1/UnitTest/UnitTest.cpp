#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab/Array.h"
#include "../Lab/Array.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestSum)
		{
			const int size = 3;
			Array res = Array(size);
			for (int i = 0; i < size; i++)
			{
				res[i] = 1.1;
			}
			Assert::AreEqual(3.3, res.Sum(), 0.1);
		}
	};
}
