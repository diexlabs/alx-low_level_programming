#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - pushes a node to the end of the list
 * @head: the pointer to the pointer to the head
 * @n: the n value of the node
 *
 * Return: the address of the new node or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *next;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n =  (int)n;

	if (!(*head))
	{
		*head = new;
		return (new);
	}
	else
	{
		next = *head;
		while (next->next)
			next = next->next;
		next->next = new;
	}
	return (new);
}
