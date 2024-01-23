#include "pch.h"
#include "CppUnitTest.h"
#include "../TD21/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestUnitaireTD21
{
	TEST_CLASS(TestUnitaireTD21)
	{
	public:
		Vector2 a = { 5,-5 };
		Vector2 b = { 5,5 };
		float b2 = 5;
		Vector2 v = { 8,8 };

		/*TEST_METHOD(TestSource)
		{
			std::string expected = "Hello World!\n";

			std::stringstream buffer;
			std::streambuf* sbuf = std::cout.rdbuf();
			std::cout.rdbuf(buffer.rdbuf());

			int result = main();

			std::cout.rdbuf(sbuf);
			std::cout << "std original buffer: \n";
			std::cout << buffer.get();

			Assert::AreEqual(expected, buffer.str());
		}*/

		TEST_METHOD(TestAdd)
		{
			Vector2 expected2 = { 10, 0 };
			float result2 = Vector2().AddVector2f({ 5,-5 }, { 5,5 }).x;
			float result3 = Vector2().AddVector2f({ 5,-5 }, { 5,5 }).y;
			Assert::AreEqual(expected2.x, result2);
			Assert::AreEqual(expected2.y, result3);
		}

		TEST_METHOD(TestSubstract)
		{
			Vector2 expected3 = { 0, 10 };
			float result4 = Vector2().SubstractVector2f({ 5,-5 }, { 5,5 }).x;
			float result5 = Vector2().SubstractVector2f({ 5,-5 }, { 5,5 }).y;
			Assert::AreEqual(expected3.x, result4);
			Assert::AreEqual(expected3.y, result5);
		}

		TEST_METHOD(TestMultiply)
		{
			Vector2 expected4 = { 25, -25 };
			float result6 = Vector2().MultiplyVector2f({ 5,-5 }, { 5 }).x;
			float result7 = Vector2().MultiplyVector2f({ 5,-5 }, { 5 }).y;
			Assert::AreEqual(expected4.x, result6);
			Assert::AreEqual(expected4.y, result7);
		}

		TEST_METHOD(TestDivide)
		{
			Vector2 expected5 = { 1, -1 };
			float result8 = Vector2().DivideVector2f({ 5,-5 }, { 5 }).x;
			float result9 = Vector2().DivideVector2f({ 5,-5 }, { 5 }).y;
			Assert::AreEqual(expected5.x, result8);
			Assert::AreEqual(expected5.y, result9);
		}

		TEST_METHOD(TestNormalize)
		{
			Vector2 expected6 = { 0.707107, 0.707107 };
			float result10 = Vector2().Normalize({ 8,8 }).x;
			float tolerance = 0.00001f;
			Assert::AreEqual(expected6.x, result10, tolerance);
		}

		TEST_METHOD(TestNorme)
		{
			float expected7 = { 7.07107 };
			float result11 = Vector2().GetNorme({ 5 , -5 });
			float tolerance = 0.00001f;
			Assert::AreEqual(expected7, result11 , tolerance);
		}

		TEST_METHOD(TestDistance)
		{
			float expected8 = { 10 };
			float result12 = Vector2().GetDistance({ 5,-5 }, { 5,5 });
			float result13 = Vector2().GetDistance({ 5,-5 }, { 5,5 });
			Assert::AreEqual(expected8, result12);
			Assert::AreEqual(expected8, result13);
		}

		TEST_METHOD(TestAngle)
		{
			float expected9 = { 1.5708 };
			float result14 = Vector2().GetSignedAngleBetween({ 5,-5 }, { 5,5 });
			float result15 = Vector2().GetSignedAngleBetween({ 5,-5 }, { 5,5 });
			float tolerance = 0.00001f;
			Assert::AreEqual(expected9, result14, tolerance);
			Assert::AreEqual(expected9, result15, tolerance);
		}
		
	};
}
