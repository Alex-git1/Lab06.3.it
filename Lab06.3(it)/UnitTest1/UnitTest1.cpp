#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab06.3(it)/Lab06.3(it).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[] = { 5, 4, 3, 2, 1 };  
			bool result = isNonIncreasing(arr, 5);
			Assert::IsTrue(result);
		}
	};
}
