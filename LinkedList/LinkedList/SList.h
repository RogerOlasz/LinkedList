#ifndef __SList_H__
#define __SList_H__

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
			DelList();
		}

		void Add(Type valor)
		{
			Node<Type>* new_node = new Node<Type>;
			new_node->value = valor;
			new_node->next = NULL;
			
			if (start != NULL)
			{
				Node<Type>* tmp = start;

				while(tmp->next != NULL)
				{
					tmp = tmp->next;
				}
				tmp->next = new_node;
			}
			else
			{
				start = new_node;
			}
			
		}

		bool Del(Node<Type>* delN)
		{
			if (delN != NULL && start  != NULL)
				{
				if (delN != start)
					{
						Node<Type>* tmp = start;
						while (tmp->next != delN)
						{
							if (tmp->next == NULL)
							{
								return false;
							}
							tmp = tmp->next;
						}
						tmp->next = delN->next;
					}
				else
				{
					start = start->next;
				}
				delete delN;
				return true;
				}
			return false;
		}

		bool DelList()
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
				return true;
			}
			return false;
		}

		unsigned int Count() const
		{
			unsigned int result=0;
			Node<Type>* tmp = start;
			while (tmp != NULL)
			{
				tmp = tmp->next;
				result++;
			}
			return result;
		}

		Node<Type>* getNodeAtPos(unsigned int position) const
		{
			if (start != NULL && position < Count())
			{
				Node<Type>* tmp = start;
				int position_counter = 0;

				while (position_counter != position)
				{
					tmp = tmp->next;
					position_counter++;
				}
				return tmp;
			}
			else
			{
				return NULL;
			}
				
		}
};

#endif //__SList_H__