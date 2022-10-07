#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the old memory block
 * @old_size: size of the old memory block
 * @new_size: the size of the new memory block
 *
 * Return: pointer or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int size;
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr && (new_size == 0))
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);
	if (!ptr)
		return (new_ptr);
	(new_size > old_size) ? (size = new_size) : (size = old_size);

	_memcpy(new_ptr, ptr, size);
	return (new_ptr);
}

/**
 * _memcpy - copies memory blocks
 * @dest: the destination address
 * @src: the source address
 * @size: the size in bytes
 *
 * Return: returns dest
 */

void _memcpy(void *dest, void *src, unsigned int size)
{
	char *csrc, *cdest;
	unsigned int i;

	csrc = (char *)src;
	cdest = (char *)dest;

	for (i = 0; i < size; i++)
		cdest[i] = csrc[i];
}
