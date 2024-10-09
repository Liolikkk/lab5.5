#include "pch.h"
#include "CppUnitTest.h"
#include"../lab5.5/lab5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:

				  // Тест для binomialCoefficient
				  TEST_METHOD(TestBinomialCoefficient)
				  {
					  Assert::AreEqual(1, binomialCoefficient(5, 0));
					  Assert::AreEqual(10, binomialCoefficient(5, 2));
					  Assert::AreEqual(1, binomialCoefficient(5, 5));
				  }

				  // Тест для fibonacci
				  TEST_METHOD(TestFibonacci)
				  {
					  Assert::AreEqual(1, fibonacci(0));
					  Assert::AreEqual(1, fibonacci(1));
					  Assert::AreEqual(2, fibonacci(2));
					  Assert::AreEqual(3, fibonacci(3));
					  Assert::AreEqual(5, fibonacci(4));
					  Assert::AreEqual(8, fibonacci(5));
				  }

				  // Тест для fibonacciBinomialIter
				  TEST_METHOD(TestFibonacciBinomialIter)
				  {
					  Assert::AreEqual(1, fibonacciBinomialIter(0));
					  Assert::AreEqual(1, fibonacciBinomialIter(1));
					  Assert::AreEqual(2, fibonacciBinomialIter(2));
					  Assert::AreEqual(3, fibonacciBinomialIter(3));
					  Assert::AreEqual(5, fibonacciBinomialIter(4));
					  Assert::AreEqual(8, fibonacciBinomialIter(5));
				  }

				  // Тест для fibonacciBinomialRecUp
				  TEST_METHOD(TestFibonacciBinomialRecUp)
				  {
					  Assert::AreEqual(1, fibonacciBinomialRecUp(0, 0));
					  Assert::AreEqual(1, fibonacciBinomialRecUp(0, 1));
					  Assert::AreEqual(2, fibonacciBinomialRecUp(0, 2));
					  Assert::AreEqual(3, fibonacciBinomialRecUp(0, 3));
					  Assert::AreEqual(5, fibonacciBinomialRecUp(0, 4));
					  Assert::AreEqual(8, fibonacciBinomialRecUp(0, 5));
				  }

				  // Тест для fibonacciBinomialRecDown
				  TEST_METHOD(TestFibonacciBinomialRecDown)
				  {
					  Assert::AreEqual(1, fibonacciBinomialRecDown(0, 0));
					  Assert::AreEqual(1, fibonacciBinomialRecDown(0, 1));
					  Assert::AreEqual(2, fibonacciBinomialRecDown(1, 2));
					  Assert::AreEqual(3, fibonacciBinomialRecDown(1, 3));
					  Assert::AreEqual(5, fibonacciBinomialRecDown(2, 4));
					  Assert::AreEqual(8, fibonacciBinomialRecDown(2, 5));
				  }
			  };
		  }
