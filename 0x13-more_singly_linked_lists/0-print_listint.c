#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints out a linked list formated
 * @h: the pointer to the list head
 *
 * Return: the number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t n;
	listint_t *next;

	next = (listint_t *)h;
	n = 0;
	if (!h)
		return (n);
	while (next->next)
	{
		printf("%d\n", next->n);
		next = next->next;
		n += 1;
	}
	printf("%d\n", next->n);
	n += 1;

	return (n);
}
