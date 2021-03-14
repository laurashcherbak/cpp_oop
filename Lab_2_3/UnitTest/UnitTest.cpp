#ifndef _CRT_SECURE_NO_WARNINGS
	#define _CRT_SECURE_NO_WARNINGS
#endif // !#define _CRT_SECURE_NO_WARNINGS

#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_1_3/CharLine.h"
#include "../Lab_1_3/CharLine.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestConvertCharLineToString)
		{
			CharLine c;
			c.Init(3);
			c.setS("abc");
			Assert::AreEqual("	N : 3\n	s : \"abc\"", string(c).c_str());
		}
	};
}
