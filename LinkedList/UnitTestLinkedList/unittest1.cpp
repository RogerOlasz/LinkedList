#include "stdafx.h"
#include "CppUnitTest.h"

#include "../LinkedList/SList.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLinkedList
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(SListConstructor)
		{
			SList<int> simple_list1;

			Assert::IsTrue(simple_list1.Count() == 0);
			Assert::IsFalse(simple_list1.Del(simple_list1.getNodeAtPos(0)) == true);
			Assert::IsNull(simple_list1.getNodeAtPos(3));

			SList<float> sl2;

			Assert::IsTrue(sl2.Count() == 0);
			Assert::IsFalse(sl2.Del(sl2.getNodeAtPos(0)) == true);
			Assert::IsNull(sl2.getNodeAtPos(3));
		}

		

	};
}