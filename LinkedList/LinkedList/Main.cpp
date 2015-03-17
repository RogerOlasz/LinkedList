#include <iostream>

#include "LinkedList.h"
#include "DynArray.h"

int main(int argc, char** argv)
{
	DynArray<float> d1;
	
	d1.PushBack(4.f);
	float popero = d1.Pop();
	printf("%s %f\n", "Pop:", popero);

	d1.PushBack(8.f);
	popero = d1.Pop();
	

	printf("%s %d\n", "Allocated memory:", d1.allocated_memory);
	printf("%s %d\n", "Num elements:", d1.allocated_items);
	printf("%s %f\n", "Pop:", popero);
	printf("%s %f\n", "Element 1:", d1.data[0]);

	system("pause");
}