#include "pch.h"
#include "CppUnitTest.h"
#include "../PR-013.2/macro.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest0132
{
	TEST_CLASS(UnitTest0132)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = 5;
			int y = 46;
			int e_maxim = 1380;
			int x_kvadr = SQR(x);
			int maxim = MAX(x_kvadr + y + z, x * y * z);
			Assert::AreEqual(e_maxim, maxim);

		}
	};
}
