#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the length of a list
 * @h: the pointer to the list head
 *
 * Return: the number of elements in a list
 */
size_t listint_len(const listint_t *h)
{
	size_t n;
	listint_t *next;

	n = 0;
	next = (listint_t *)h;
	if (!next)
		return (n);
	while (next->next)
	{
		next = next->next;
		n += 1;
	}

	return (n + 1);
}
