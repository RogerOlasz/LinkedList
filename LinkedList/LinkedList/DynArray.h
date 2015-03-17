#ifndef __DynamicArray_H__
#define __DynamicArray_H__

#include <assert.h>
#include <iostream>

template<class Type>
class DynArray
{
	public:

		Type* data;
		unsigned int allocated_memory;
		unsigned int allocated_items;

	public:

		DynArray() :data(NULL), allocated_memory(0), allocated_items(0) {}

		DynArray(unsigned int mem_size) { Reallocate(mem_size); }

		~DynArray(){ if (data != NULL) delete[] data;}

		void Reallocate(unsigned int new_memory_size)
		{
			if (data != NULL)
			{
				Type* tmp = new Type[allocated_memory];

				for (unsigned int i = 0; i < allocated_items; i++)
				{
					tmp[i] = data[i];
				}

				delete[] data;
				allocated_memory = new_memory_size;
				data = new Type[allocated_memory];

				for (unsigned int i = 0; i < allocated_items; i++)
				{
					data[i] = tmp[i];
				}
			}
			else
			{
				delete data;
				allocated_memory = new_memory_size;
				data = new Type[allocated_memory];
			}
		}

		void PushBack(Type value)
		{
			if (data != NULL)
			{
				if (allocated_memory <= allocated_items)
				{
					Reallocate(allocated_memory + 1);
				}
				data[allocated_items] = value;
				allocated_items++;
			}
			else
			{
				Reallocate(1);
				data[allocated_items] = value;
				allocated_items++;
			}
		}

		Type Pop()
		{
			if (data != NULL)
			{
				if (allocated_items != 0)
				{
					allocated_items--;
					return data[allocated_items];
				}
			}
			return 666;
		}

		bool Insert(int value, unsigned int position)
		{
			if (data != NULL)
			{
				if (position <= allocated_items)
				{
					if (allocated_memory > allocated_items)
					{
						for (unsigned int i = 0; i == position; i++;)
						{

						}

					}
				}
				return false;
			}

		}

		int& operator[](unsigned int index)
		{
			assert(index < allocated_items);
			return data[index];
		}
		const int& operator[](unsigned int index) const
		{
			assert(index < allocated_items);
			return data[index];
		}
};

#endif //__DynamicArray_H__