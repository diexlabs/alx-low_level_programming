#include "sort.h"

/**
* insertion_sort_list - sorts a doubly linked list
* @list: double pointer to the double linked list
*
* Description: an implementation of insertion sort in c
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *node, *next, *temp_next, *curr;

	if (!list)
		return;

	node = (*list)->next;
	for (; node != NULL;)
	{
		next = node->next;
		curr = node->prev;
		while (curr && node->n < curr->n)
			curr = curr->prev;
		
		if (node->prev != NULL)
			node->prev->next = node->next;
		if (node->next != NULL)
			node->next->prev = node->prev;

		if (!curr)
		{
			node->next = *list;
			node->prev = NULL;
			*list = node;
		}
		else
		{
			temp_next = curr->next;
			node->prev = curr;
			node->next = temp_next;
			curr->next = node;
			temp_next->prev = node;
		}
		node = next;
		print_list(*list);
	}
}
