#include "main.h"

/**
 * _memcpy - copies a characters from src memory area to target mem area
 * @dest: destination mem area
 * @src: source mem area
 * @n: number of characters to copy
 *
 * Return: returns thea address of dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
		*dest++ = *src++;

	return (dest);
}
