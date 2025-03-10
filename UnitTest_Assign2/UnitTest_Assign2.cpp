#include "pch.h"
#include "CppUnitTest.h"
#include "..\BCSRec\main.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TASK1
{
	TEST_CLASS(TASK1)
	{
	public:

		TEST_METHOD(getPerimeter_LenghtWidth_perimetercalculation)
		{
			//This function validates getPerimeter 

			int length = 10;
			int width = 20;

			int Result = getPerimeter(&length, &width);
			Assert::AreEqual(60, Result);
		}
		TEST_METHOD(getArea_LenghtWidth_areacalculation)
		{
			//This function validates getArea

			int length = 10;
			int width = 20;

			int Result = getArea(&length, &width);
			Assert::AreEqual(200, Result);
		}

	};
}





