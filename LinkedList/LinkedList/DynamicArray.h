#ifndef __DynamicArray_H__
#define __DynamicArray_H__

#include <iostream>

class DynArray
{
	private:

		int* data;
		unsigned int allocated_memory;
		unsigned int allocated_items;

	public:

		DynArray() :data(NULL), allocated_memory(0), allocated_items(0){}

		DynArray(unsigned int mem_size) { Reallocate(mem_size); }

		~DynArray(){ if (data != NULL) delete[] data;}

		void Reallocate(unsigned int new_memory_size)
		{

		}

		void PushBack(int value)
		{

		}

		int Pop()
		{

		}

		void Insert(int value, unsigned int position)
		{

		}

		int& operator[](unsigned int index) 
		{

		}
};

#endif //__DynamicArray_H__