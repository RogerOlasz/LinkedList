#include "stdafx.h"
#include "CppUnitTest.h"

#include "../LinkedList/SList.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLinkedList
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(SListConstr)
		{
			SList<int> simple_list1;

			Assert::IsTrue(simple_list1.Count() == 0);
			Assert::IsFalse(simple_list1.Del(simple_list1.getNodeAtPos(0)) == true);
			Assert::IsNull(simple_list1.getNodeAtPos(3));
		}

		TEST_METHOD(SListCount)
		{
			SList<int> simple_list1;

			simple_list1.Add(8);
			simple_list1.Add(18);

			Assert::IsTrue(simple_list1.Count() == 2);
			Assert::IsTrue(simple_list1.Del(simple_list1.getNodeAtPos(0)) == true);
			Assert::IsTrue(simple_list1.DelList() == true);
		}
		
		TEST_METHOD(SListGetNode)
		{
			SList<int> simple_list1;

			simple_list1.Add(10);

			Assert::IsTrue(simple_list1.Del(simple_list1.getNodeAtPos(0)) == true);
			Assert::IsTrue(simple_list1.Count() == 0);
		}

		TEST_METHOD(SListDel)
		{
			SList<int> simple_list1;

			simple_list1.Add(28);

			Assert::IsTrue(simple_list1.Del(simple_list1.getNodeAtPos(0)) == true);
			Assert::IsTrue(simple_list1.Count() == 0);

			simple_list1.Add(-2);
			simple_list1.Add(9);
			simple_list1.Add(-30);
			simple_list1.Add(-58);

			Assert::IsFalse(simple_list1.Del(simple_list1.getNodeAtPos(-1)) == true);
			Assert::IsTrue(simple_list1.Del(simple_list1.getNodeAtPos(3)) == true);
			Assert::IsTrue(simple_list1.Del(simple_list1.getNodeAtPos(2)) == true);

			Assert::IsTrue(simple_list1.Count() == 2);

			Assert::IsTrue(simple_list1.Del(simple_list1.getNodeAtPos(1)) == true);
			Assert::IsTrue(simple_list1.Del(simple_list1.getNodeAtPos(0)) == true);

			Assert::IsTrue(simple_list1.Count() == 0);

		}

		TEST_METHOD(SListDelList)
		{
			SList<int> simple_list1;

			simple_list1.Add(-12);
			simple_list1.Add(29);
			simple_list1.Add(-36);
			simple_list1.Add(4);

			Assert::IsTrue(simple_list1.Count() == 4);
			Assert::IsTrue(simple_list1.DelList() == true);
			Assert::IsTrue(simple_list1.Count() == 0);
		}

	};
}