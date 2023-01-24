#include "sort.h"

/**
* insertion_sort_list - sorts a doubly linked list
* @list: double pointer to the double linked list
*
* Description: an implementation of insertion sort in c
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *node, *next, *prev, *temp;

	if (!list)
		return;

	node = (*list)->next;
	for (; node != NULL;)
	{
		next = node->next;
		while (node->prev != NULL)
		{
			prev = node->prev;
			if (node->n < prev->n)
			{
				temp = prev->prev;
				prev->next = node->next;
				if (node->next != NULL)
					node->next->prev = prev;
				prev->prev = node;
				node->next = prev;

				if (temp)
				{
					temp->next = node;
					node->prev = temp;
				}
				else
				{
					node->prev = NULL;
					*list = node;
				}
				print_list(*list);
			}
			else
			{
				break;
			}
		}
		node = next;
	}
}
