#include "pch.h"
#include "CppUnitTest.h"
#include "../TD21/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestUnitaireTD21
{
	TEST_CLASS(TestUnitaireTD21)
	{
	public:

		/*Vector2 a = { 5,-5 };
		Vector2 b = { 5,5 };
		float b2 = 5;
		Vector2 v = { 8,8 };*/

		TEST_METHOD(TestSource)
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
		}
		TEST_METHOD(TestAdd)
		{
			Vector2 expected2 = { 10 , 0 };
			float result2 = Vector2().AddVector2f({ 5,-5 },{5,5}).x;
			float result3 = Vector2().AddVector2f({ 5,-5 }, { 5,5 }).y;
			Assert::AreEqual(expected2.x, result2);
			Assert::AreEqual(expected2.y, result3);
			
			
		}
		TEST_METHOD(TestSubstract)
		{

		}
		TEST_METHOD(TestMultiply)
		{

		}
		TEST_METHOD(TestDivide)
		{

		}
		TEST_METHOD(TestNormalize)
		{

		}
		TEST_METHOD(TestNorme)
		{

		}
		TEST_METHOD(TestDistance)
		{

		}
		TEST_METHOD(TestAngle)
		{

		}
	};
}
