#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at index
 * @h: double pointer to the list head
 * @idx: index to insert node
 * @n: the node value
 *
 * Return: pointer to the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *next, *curr;

	next = NULL;
	if (!h && (idx != 0))
		return (NULL);
	else if (!h && (idx == 0))
		return (add_dnodeint(&next, n));

	count = 0;
	curr = *h;
	while (curr->next && (count != idx - 1))
	{
		count++;
		curr = curr->next;
	}
	if (count != idx - 1)
		return (NULL);

	next = curr->next;
	next = add_dnodeint(&next, n);
	curr->next = next;
	next->prev = curr;

	return (next);
}
