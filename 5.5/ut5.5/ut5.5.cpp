#include "pch.h"
#include "CppUnitTest.h"
#include "../5.5/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ut55
{
	TEST_CLASS(ut55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int rez = g(3, 4, 5);
			Assert::AreEqual(2, rez);

		}
	};
}
