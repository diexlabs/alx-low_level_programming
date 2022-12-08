#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a node to the beginning of the list
 * @head: double pointer to the head of the list
 * @n: the value of the node
 *
 * Return: address of the new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *old;

	old = *head;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = old;
	new->prev = NULL;

	if (old)
		old->prev = new;

	*head = new;
	return (new);
}
