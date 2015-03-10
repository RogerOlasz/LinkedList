#include <iostream>

struct node
{
	int value;
	node* next;
};

class SList
{
	private:
		node* start;

	public:
		
		SList()
		{
			start = NULL;
		}

		~SList()
		{
			SList::DelList();
		}

		void Add(int valor)
		{
			node* new_node = new node;
			new_node->value = valor;
			new_node->next = NULL;
			node* tmp = start;

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

		void Del(node* delN)
		{
			if (delN != NULL && start  != NULL)
				{
				if (delN != start)
					{
						node* tmp = start;
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
						node* tmp_node_delete = start;
						start = start->next;
						delete tmp_node_delete;
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