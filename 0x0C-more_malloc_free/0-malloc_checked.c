#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory with malloc with proper checks
 * @b: the number of bytes to allocate
 *
 * Return: returns the memory address or exits with 98 if error
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);

	return (ptr);
}
