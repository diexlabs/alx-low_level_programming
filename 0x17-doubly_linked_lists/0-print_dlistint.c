#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: the pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;
	dlistint_t *next;

	next = (dlistint_t *) h;
	count = 0;
	while (next)
	{
		printf("%d\n", next->n);
		count++;
		next = next->next;
	}

	return (count);
}
