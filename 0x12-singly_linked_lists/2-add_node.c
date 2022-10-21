#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add a new node to the begining of the list
 * @head: the head of the list
 * @str: the str member of the node
 *
 * Return: the address of the new node or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t n;

	for (n = 0; str[n]; n++)
		;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->len = n;
	new->str = strdup(str);
	new->next = *head;

	*head = new;

	return (new);
}
