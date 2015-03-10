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
			if (delN != NULL)
				{
				if (delN != start)
					{
						node* tmp = start;
						while (tmp->next != delN)
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