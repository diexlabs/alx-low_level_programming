#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initialized it
 * @size: the size of the character array to initialize
 * @c: the char to initialize the array to
 *
 * Return: a pointer to char array
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (i < size)
			a[i++] = c;
		return (a);
	}
}
