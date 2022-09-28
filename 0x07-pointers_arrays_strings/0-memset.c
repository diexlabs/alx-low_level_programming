#include "main.h"

/**
 * _memset - sets a memory block to a constant byte
 * @s: the address of the char block
 * @b: the constant byte to fill
 * @n: the number of times to fill
 *
 * Return: return s
 */


char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
		*s++ = b;

	return (s);
}
