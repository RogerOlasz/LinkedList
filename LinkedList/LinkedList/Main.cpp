#include <iostream>

#include "LinkedList.h"
#include "DynArray.h"

int main(int argc, char** argv)
{
	DynArray<float> d1;
	
	d1.PushBack(4.f);
	d1.PushBack(15.f);
	
	d1.Insert(8, 2);

	printf("%s %d\n", "Allocated memory:", d1.allocated_memory);
	printf("%s %d\n", "Num elements:", d1.allocated_items);
	printf("%s %f\n", "Element 2:", d1.data[1]);
	printf("%s %f\n", "Element 2:", d1.data[0]);

	system("pause");
	return 0;
}