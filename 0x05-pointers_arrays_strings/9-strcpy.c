#include "main.h"

/**
 * _strcpy - copies a string from one destination to another
 * @dest: the destination address of the string
 * @src: the source address of the string
 *
 * Return: returns the destination address of the string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i + 1) = '\0';

	return (&(*dest));
}
