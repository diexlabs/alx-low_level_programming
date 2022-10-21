#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the length of a list
 * @h: the list head
 *
 * Return: the len
 */

size_t list_len(const list_t *h)
{
	list_t *current;
	size_t n;

	n = 0;
	if (!h)
		return (n);

	current = (list_t *)h;
	while (current->next)
	{
		n += 1;
		current = current->next;
	}
	n += 1;

	return (n);
}
