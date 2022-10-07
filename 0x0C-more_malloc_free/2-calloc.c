#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory to array
 * @nmemb: number of elements in the array
 * @size: the size in bytes of an element of the array
 *
 * Return: returns a pointer to the allocated address or NULL if error
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = '\0';

	return (ptr);
}
