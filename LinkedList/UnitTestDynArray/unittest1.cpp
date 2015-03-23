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
		/*TEST_METHOD(DynArrayConstr2)
		{
		DynArray<int> dyn_array1(5);

		Assert::IsTrue(dyn_array1.getAllocatedMemory() == 5);
		Assert::IsTrue(dyn_array1.getAllocatedItems() == 0);
		}
		TEST_METHOD(DynArrayPushBack)
		{
		DynArray<int> dyn_array1;
		dyn_array1.PushBack(13);
		Assert::IsTrue(dyn_array1.getAllocatedMemory() == 1);
		Assert::IsTrue(dyn_array1.getAllocatedItems() == 1);

		DynArray<double> dyn2(1);
		dyn2.PushBack(13.99823);
		dyn2.PushBack(13.29234);
		Assert::IsTrue(dyn2.getAllocatedMemory() == 2);
		Assert::IsTrue(dyn2.getAllocatedItems() == 2);

		DynArray<double> dyn3(4);
		dyn3.PushBack(13.99823);
		dyn3.PushBack(13.29234);
		Assert::IsTrue(dyn3.getAllocatedMemory() == 4);
		Assert::IsTrue(dyn3.getAllocatedItems() == 2);
		}
		TEST_METHOD(DynArrayPop)
		{
		DynArray<int> dyn_array1;
		dyn_array1.PushBack(13);
		dyn_array1.Pop();
		Assert::IsTrue(dyn_array1.getAllocatedMemory() == 1);
		Assert::IsTrue(dyn_array1.getAllocatedItems() == 0);
		dyn_array1.Pop();
		Assert::IsTrue(dyn_array1.getAllocatedMemory() == 1);
		Assert::IsTrue(dyn_array1.getAllocatedItems() == 0);

		DynArray<float> dyn2;
		Assert::IsTrue(dyn2.Pop() == -1);
		Assert::IsTrue(dyn2.getAllocatedMemory() == 0);
		Assert::IsTrue(dyn2.getAllocatedItems() == 0);

		DynArray<float> dyn3(6);
		dyn3.PushBack(3);
		dyn3.PushBack(4);
		dyn3.PushBack(5);
		Assert::IsTrue(dyn3.Pop() == 5);
		Assert::IsTrue(dyn3.getAllocatedMemory() == 6);
		Assert::IsTrue(dyn3.getAllocatedItems() == 2);
		}
		TEST_METHOD(DynArrayInsert)
		{
		DynArray<int> dyn_array1;
		Assert::IsTrue(dyn_array1.Insert(13, 1) == false);
		Assert::IsTrue(dyn_array1.getAllocatedMemory() == 0);
		Assert::IsTrue(dyn_array1.getAllocatedItems() == 0);
		Assert::IsTrue(dyn_array1.Insert(12, 0) == true);
		Assert::IsTrue(dyn_array1.getAllocatedMemory() == 1);
		Assert::IsTrue(dyn_array1.getAllocatedItems() == 1);
		dyn_array1.PushBack(11);
		dyn_array1.PushBack(12);
		dyn_array1.PushBack(13);
		Assert::IsTrue(dyn_array1.Insert(12, 0) == true);
		Assert::IsTrue(dyn_array1.Insert(12, 2) == true);
		Assert::IsTrue(dyn_array1.getAllocatedMemory() == 6);
		Assert::IsTrue(dyn_array1.getAllocatedItems() == 6);
		}
		TEST_METHOD(DynArrayOperatorClaudator)
		{
		DynArray<int> dyn_array1;
		dyn_array1.PushBack(8);
		Assert::IsTrue(dyn_array1[0] == 8);
		}*/

	};
}