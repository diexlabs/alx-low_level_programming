#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the address of the destination string
 * @src: the address of the source string
 * @n: the number of characters to concatenate
 *
 * Return: returns dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *end;

	i = 0;
	while (*(dest + i))
		i++;
	end = dest + i;

	i = 1;
	while ((i <= n) && (*end++ = *src++))
		i++;

	return (dest);
}
