#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - appends a node to the list
 * @head: pointer to a pointer to the list heading
 * @n: the n value of the node
 *
 * Return: return the address of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = (int)n;
	new->next = *head;
	*head = new;
	return (new);
}
