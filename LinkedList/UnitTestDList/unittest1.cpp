#include "stdafx.h"
#include "CppUnitTest.h"

#include "../LinkedList/DList.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestDList
{		
	TEST_CLASS(UnitTestDList)
	{
	public:
		
		TEST_METHOD(DListConstr)
		{
			DList<int> double_list1;

			Assert::IsTrue(double_list1.Count() == 0);
			Assert::IsTrue(double_list1.Del(double_list1.getNodeAtPos(0)) == false);
			Assert::IsNull(double_list1.getNodeAtPos(3));
		}

		TEST_METHOD(DListCount)
		{
			DList<int> double_list1;

			double_list1.Add(8);
			double_list1.Add(18);

			Assert::IsTrue(double_list1.Count() == 2);
			Assert::IsTrue(double_list1.Del(double_list1.getNodeAtPos(0)) == true);
			Assert::IsTrue(double_list1.DelList() == true);
		}

		TEST_METHOD(DListGetNode)
		{
			DList<int> double_list1;

			double_list1.Add(10);

			Assert::IsTrue(double_list1.Del(double_list1.getNodeAtPos(0)) == true);
			Assert::IsTrue(double_list1.Count() == 0);
		}

		TEST_METHOD(DListDel)
		{
			DList<int> double_list1;

			double_list1.Add(28);

			Assert::IsTrue(double_list1.Del(double_list1.getNodeAtPos(0)) == true);
			Assert::IsTrue(double_list1.Count() == 0);

			double_list1.Add(-2);
			double_list1.Add(9);
			double_list1.Add(-30);
			double_list1.Add(58);

			Assert::IsFalse(double_list1.Del(double_list1.getNodeAtPos(-1)) == true);
			Assert::IsTrue(double_list1.Del(double_list1.getNodeAtPos(3)) == true);
			Assert::IsTrue(double_list1.Del(double_list1.getNodeAtPos(2)) == true);

			Assert::IsTrue(double_list1.Count() == 2);

			Assert::IsTrue(double_list1.Del(double_list1.getNodeAtPos(1)) == true);
			Assert::IsTrue(double_list1.Del(double_list1.getNodeAtPos(0)) == true);

			Assert::IsTrue(double_list1.Count() == 0);

		}

		TEST_METHOD(DListDelList)
		{
			DList<int> double_list1;

			double_list1.Add(-12);
			double_list1.Add(29);
			double_list1.Add(-36);
			double_list1.Add(4);

			Assert::IsTrue(double_list1.Count() == 4);
			Assert::IsTrue(double_list1.DelList() == true);
			Assert::IsTrue(double_list1.Count() == 0);
		}

	};

};