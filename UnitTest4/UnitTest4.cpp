#include "pch.h"
#include "CppUnitTest.h"
#include "../5.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			const int N = 25;
			const int i = 20;
			c = S1(N, i);
			Assert::AreEqual(c, 0.); 
		}
	};
}
