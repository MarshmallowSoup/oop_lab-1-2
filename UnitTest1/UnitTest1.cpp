#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1_2/Vector.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector v;
			v.setState(0);
			v.setI(2);
			v.create();
			v.setElem(0, 6);
			v.setElem(1, 8);
			double result = v.eucledianSpace();
			Assert::AreEqual(10.0, result);
		}
	};
}
