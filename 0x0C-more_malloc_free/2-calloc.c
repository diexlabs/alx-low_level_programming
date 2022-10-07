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
	void *ptr;

	if (!nmemb || !size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);

	return (ptr);
}
