#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the address of the destination string
 * @src: the address of the source string
 *
 * Return: returns dest
 */

char *_strcat(char *dest, char *src)
{
	char *end;
	int i;

	i = 0;
	while (*(dest + i))
		i++;
	end = dest + i;

	while ((*end++ = *src++))
		;

	return (dest);
}
