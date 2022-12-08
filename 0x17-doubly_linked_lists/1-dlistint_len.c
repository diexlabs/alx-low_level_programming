#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - returns the length of a doubly linked list
 * @h: the pointer to the head of the doubly list list
 *
 * Return: len
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;
	dlistint_t *next;

	next = (dlistint_t *) h;
	count = 0;
	while (next)
	{
		count++;
		next = next->next;
	}

	return (count);
}
