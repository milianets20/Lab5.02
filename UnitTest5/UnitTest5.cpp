#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.02/Lab5.02.cpp"

#define _USE_MATH_DEFINES

#include <math.h>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{

			int n = 0;
			double t;
			t = M_PI / 2 - (-0.99 + S(-0.99, 0.00000001, n));
			Assert::AreEqual(acos(-0.99), t, 0.0001);
		}
	};
}