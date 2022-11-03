#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.2/lab5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = S(1, 1, 1, 1);
			Assert::AreEqual(2, t, 0.00001);
		}
	};
}
