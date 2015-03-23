#include "stdafx.h"
#include "CppUnitTest.h"

#include "../LinkedList/DynArray.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestDynArray
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(DynArrayConstr1)
		{
			DynArray<int> dyn_array1;

			Assert::IsTrue(dyn_array1.getAllocatedMemory() == 0);
			Assert::IsTrue(dyn_array1.getAllocatedItems() == 0);
		}

		TEST_METHOD(DynArrayConstr2)
		{
			DynArray<int> dyn_array1(8);

			Assert::IsTrue(dyn_array1.getAllocatedMemory() == 8);
			Assert::IsTrue(dyn_array1.getAllocatedItems() == 0);
		}

		TEST_METHOD(DynArrayPushBack)
		{
			DynArray<float> dyn_array1;
			dyn_array1.PushBack(18.7f);
			Assert::IsTrue(dyn_array1.getAllocatedMemory() == 1);
			Assert::IsTrue(dyn_array1.getAllocatedItems() == 1);
		}

		TEST_METHOD(DynArrayPop)
		{
			DynArray<int> dyn_array1;

			dyn_array1.PushBack(6);
			dyn_array1.Pop();

			Assert::IsTrue(dyn_array1.getAllocatedMemory() == 1);
			Assert::IsTrue(dyn_array1.getAllocatedItems() == 0);

			dyn_array1.Pop();

			Assert::IsTrue(dyn_array1.getAllocatedMemory() == 1);
			Assert::IsTrue(dyn_array1.getAllocatedItems() == 0);
		}

		TEST_METHOD(DynArrayInsert)
		{
			DynArray<float> dyn_array1;

			Assert::IsTrue(dyn_array1.Insert(2.3f, 1) == false);
			Assert::IsTrue(dyn_array1.getAllocatedMemory() == 0);
			Assert::IsTrue(dyn_array1.getAllocatedItems() == 0);

			Assert::IsTrue(dyn_array1.Insert(5.8f, 0) == true);
			Assert::IsTrue(dyn_array1.getAllocatedMemory() == 1);
			Assert::IsTrue(dyn_array1.getAllocatedItems() == 1);

			dyn_array1.PushBack(15.3f);
			dyn_array1.PushBack(17.9f);
			dyn_array1.PushBack(19.1f);

			Assert::IsTrue(dyn_array1.Insert(22.8f, 0) == true);
			Assert::IsTrue(dyn_array1.Insert(42.2f, 2) == true);
			Assert::IsTrue(dyn_array1.getAllocatedMemory() == 6);
			Assert::IsTrue(dyn_array1.getAllocatedItems() == 6);
		}

		TEST_METHOD(DynArrayOperatorClaudator)
		{
			DynArray<int> dyn_array1;
			dyn_array1.PushBack(4);

			Assert::IsTrue(dyn_array1[0] == 4);
		}
	};
}