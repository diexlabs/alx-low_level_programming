#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints the length of a list
 * @h: the list head
 *
 * Return: returns the length of the list
 */

size_t print_list(const list_t *h)
{
	list_t *current;
	size_t n;

	n = 0;
	current = (list_t *)h;
	while (current->next)
	{
		print_node(current);
		n += 1;
		current = current->next;
	}
	print_node(current);
	n += 1;

	return (n);
}


/**
 * print_node - prints a node to stdout
 * @n: the node to print
 *
 * Return: void
 */

void print_node(list_t *n)
{
	printf("[%d] %s\n", n->str ? n->len : 0, n->str ? n->str : "(nil)");
}
