#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BubbleTest
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int n = 10000;
			int arr[n];

			int j = n;
			for (int i = n; i > 0; i--) {
				arr[i - j] = i;
				j = j - 2;
			}

			BubbleSort(arr, n);

			for (int i = 0; i < n; i++) {
				Assert::AreEqual(arr[i], i + 1);
			}
		}

		TEST_METHOD(TestMethod2)
		{
			const int n = 10000;
			int arr[n];

			for (int i = 0; i < n; i++) {
				arr[i] = rand() % 100;
			}

			BubbleSort(arr, n);

			bool b = false;
			for (int i = 0; i < n; i++) {
				if (arr[i] <= arr[i + 1] || i == n - 1) { b = true; }
				Assert::IsTrue(b);
				b = false;
			}
		}
	};
}