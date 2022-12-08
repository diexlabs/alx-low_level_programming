#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the values of the list nodes
 * @head: the pointer to the list head
 *
 * Return: the sum or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *curr;

	if (!head)
		return (0);
	curr = head;
	sum = 0;
	while (curr->next)
	{
		sum += curr->n;
		curr = curr->next;
	}
	sum += curr->n;

	return (sum);
}
