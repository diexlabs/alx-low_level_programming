#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees the list memory
 * @head: the head of the list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	if (!head)
		return;

	if (!(head->next))
	{
		free(head->str);
		free(head);
	}
	else
	{
		free_list(head->next);
		free(head);
	}
}
