#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at a given index
 * @head: the pointer to the list head
 * @index: the target index
 *
 * Return: pointer to node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int count;

	if (!head)
		return (NULL);

	curr = head;
	count = 0;
	while ((curr->next) && (index != count))
	{
		curr = curr->next;
		count++;
	}
	if (count == index)
		return (curr);

	return (NULL);
}
