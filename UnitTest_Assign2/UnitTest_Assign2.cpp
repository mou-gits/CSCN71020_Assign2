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

namespace TASK2
{
	TEST_CLASS(TASK2)
	{
	public:
		TEST_METHOD(setLength_integer_SettingProperLength)
		{	//This function validates setLength()
			int length;
			setLength(10, &length);
			Assert::AreEqual(10, length);
			setLength(1, &length);
			Assert::AreEqual(1, length);
			setLength(99, &length);
			Assert::AreEqual(99, length);
		}
		TEST_METHOD(setLength_integer_SettingTooHighLength)
		{	//This function validates setLength()
			int length;
			setLength(100, &length);
			Assert::AreNotEqual(100, length);
			setLength(110, &length);
			Assert::AreNotEqual(110, length);
			setLength(150, &length);
			Assert::AreNotEqual(150, length);
		}
		TEST_METHOD(setLength_integer_SettingTooLowLength)
		{	//This function validates setLenght()
			int length;
			setLength(0, &length);
			Assert::AreNotEqual(0, length);
			setLength(-1, &length);
			Assert::AreNotEqual(-1, length);
			setLength(-10, &length);
			Assert::AreNotEqual(-10, length);
		}
		TEST_METHOD(setWidth_integer_SettingProperWidth)
		{//This function validates setWidth()
			int width;
			setWidth(10, &width);
			Assert::AreEqual(10, width);
			setWidth(1, &width);
			Assert::AreEqual(1, width);
			setWidth(99, &width);
			Assert::AreEqual(99, width);
		}
		TEST_METHOD(setWidth_integer_SettingTooHighWidth)
		{	//This function validates setWidth()
			int width;
			setWidth(100, &width);
			Assert::AreNotEqual(100, width);
			setWidth(110, &width);
			Assert::AreNotEqual(110, width);
			setWidth(150, &width);
			Assert::AreNotEqual(150, width);
		}
		TEST_METHOD(setWidth_integer_SettingTooLowWidth)
		{	//This function validates setLenght()
			int width;
			setWidth(0, &width);
			Assert::AreNotEqual(0, width);
			setWidth(-1, &width);
			Assert::AreNotEqual(-1, width);
			setWidth(-10, &width);
			Assert::AreNotEqual(-10, width);
		}
	};
}



