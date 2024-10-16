#include "pch.h"
#include "CppUnitTest.h"
#include "../LB6.3it/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            const int SIZE = 20;
            int arr[SIZE]{};
            int MIN = -20;
            int MAX = 20;
            create(arr, SIZE, MIN, MAX);
            Assert::AreEqual(-20, FindMin(arr, SIZE), 0.00001);
        }

        TEST_METHOD(TestMethod2)
        {
            const int SIZE = 20;
            int arr[SIZE]{};
            int MIN = -20;
            int MAX = 20;
            SecondCreate(arr, SIZE, MIN, MAX);
            Assert::AreEqual(-20, SecondFindMin(arr, SIZE), 0.00001);
        }
    };
}
