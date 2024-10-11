#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_06.2_it/lab_06.2_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest062it
{
	TEST_CLASS(UnitTest062it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[] = { 1,9,5,1,4,7,8 };
			Assert::AreEqual(counter(arr,7), 5);
		}
	};
}
