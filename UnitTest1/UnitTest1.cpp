#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.1 it/Lab 6.1 it.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int test[20] = { -7, -10, 7, 2, -4, -4, -10, -11, 4, -11, -13, -13, -14, -8, 1, -5, -11, -4, 0, 4, };
			int a;
			a = countElements(test, 20);
			Assert::AreEqual(a, 3);

			a = sumElements(test, 20);
			Assert::AreEqual(a, 10);
		}
	};
}
