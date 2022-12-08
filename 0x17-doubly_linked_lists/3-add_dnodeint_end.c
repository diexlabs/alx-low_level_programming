#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - add a new node to the end of the list
 * @head: double pointer to the list head
 * @n: the value of the new node
 *
 * Return: pointer to the new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *old;

	old = *head;
	while (old && old->next)
		old = old->next;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = old;

	if (old)
		old->next = new;
	else
		*head = new;
	return (new);
}
