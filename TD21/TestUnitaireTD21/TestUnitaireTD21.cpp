#include "pch.h"
#include "CppUnitTest.h"
#include "../TD21/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestUnitaireTD21
{
	TEST_CLASS(TestUnitaireTD21)
	{
	public:
		
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
			/*Vector2 expected2 = { 10 , 0 };
			int result2 = main();
			
			*/
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
