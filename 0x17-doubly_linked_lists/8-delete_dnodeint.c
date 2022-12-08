#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: double pointer to list head
 * @index: the target index
 *
 * Return: 1 for success -1 for failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;
	dlistint_t *target, *next, *prev;

	count = 0;
	target = *head;
	if (!target)
		return (-1);
	while (target->next && count != index)
	{
		count++;
		target = target->next;
	}

	if (count != index)
		return (-1);
	prev = target->prev;
	next = target->next;
	if (prev)
		prev->next = next;
	if (next)
		next->prev = prev;
	if (index == 0)
		*head = next;

	free(target);
	return (1);
}
