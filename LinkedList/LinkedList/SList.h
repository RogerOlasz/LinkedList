#ifndef __LinkedList_H__
#define __LinkedList_H__

#include <iostream>

template<class Type>
struct Node
{
	Type value;
	Node<Type>* next;
};

template<class Type>
class SList
{
	private:
		Node<Type>* start;

	public:
		
		SList()
		{
			start = NULL;
		}

		~SList()
		{
			SList::DelList();
		}

		void Add(Type valor)
		{
			Node<Type>* new_node = new Node;
			new_node->value = valor;
			new_node->next = NULL;
			Node<Type>* tmp = start;

			if (start == NULL)
			{
				tmp->next = new_node;
			}

			while(tmp!=NULL)
			{
				tmp = tmp->next;
			}
			tmp->next = new_node;
		}

		void Del(Node* delN)
		{
			if (delN != NULL && start  != NULL)
				{
				if (delN != start)
					{
						Node<Type>* tmp = start;
						while (tmp->next != delN && tmp->next != NULL)
						{
							tmp = tmp->next;
						}
						tmp->next = delN->next;
					}
				else
					{
					start = start->next;
					}
				delete delN;
				}
		}

		void DelList()
		{
			if (start != NULL)
			{
					while (start->next != NULL)
					{
						Node<Type>* tmp_Node_delete = start;
						start = start->next;
						delete tmp_Node_delete;
					}
				delete start;
				start = NULL;
			}
		}

		unsigned int count() const
		{
			unsigned int result=0;
			while (start->next!=NULL)
			{
				result++;
			}
			return result;
		}

};

#endif //__LinkedList_H__