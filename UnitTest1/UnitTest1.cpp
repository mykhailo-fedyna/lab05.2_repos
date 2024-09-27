#include "pch.h"
#include "CppUnitTest.h"
#include <cmath> 
#include "../Lab5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

void S(const double x, const double eps, int& n, double& s); 
void A(const double x, const int n, double& a); 

//double S2(const double x, const double eps, int& n, double s);
//double A2(const double x, const int n, double a);

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestFunctionS)
		{
			double eps = 0.000001;
			double s = 0;
			int n = 0;

			double x = 2.0;
			S(x, eps, n, s);

			double expected = log(x);

			Assert::IsTrue(abs(s - expected) < eps);
			Assert::IsTrue(n > 0);
		}

		TEST_METHOD(TestFunctionA)
		{
			double x = 2.0;
			int n = 1;
			double a = (x - 1) / x;

			A(x, n, a);

			double expectedR = (n * (x - 1)) / ((n + 1) * x);
			double expectedA = ((x - 1) / x) * expectedR;

			Assert::IsTrue(abs(a - expectedA) < 0.000001);
		}
		/*TEST_METHOD(TestFunctionS2)
		{
			double eps = 0.000001;
			double s = 0;
			int n = 0;

			double x = 2.0;
			double result = S2(x, eps, n, s);

			double expected = log(x);

			Assert::IsTrue(abs(result - expected) < eps);
			Assert::IsTrue(n > 0);
		}

		TEST_METHOD(TestFunctionA2)
		{
			double x = 2.0;
			int n = 1;
			double a = (x - 1) / x;

			double result = A2(x, n, a);

			double expectedR = (n * (x - 1)) / ((n + 1) * x);
			double expectedA = a * expectedR;

			Assert::IsTrue(abs(result - expectedA) < 0.000001);
		}*/
	};
}

