#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - appends a node to the end of the list
 * @head: a pointer to the head of the list
 * @str: the str member of the new node
 *
 * Return: address of new node or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new;
	size_t n;

	for (n = 0; str[n]; n++)
		;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = n;
	new->next = NULL;

	if (!(*head))
	{
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;

		temp->next = new;
	}

	return (new);
}
