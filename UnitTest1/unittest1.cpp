#include "stdafx.h"
#include "CppUnitTest.h"
#include "../opensourceTestHW02/Triangle.cpp"

bool operator== (struct Triangle t1, struct Triangle t2) {
	return t1.area == t2.area;
}

std::wstring ToString(struct Triangle t) {
	return std::to_wstring(t.area) + std::wstring(L"+");
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TriangleArea)
		{
			struct Triangle t, result, compare;
			t.width = 3;
			t.height = 4;

			result = Triangle_area(t);
			compare.area = 6;
			Assert::AreEqual(result, compare);
		}

	};
}