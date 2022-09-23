#include "main.h"

/**
 * _strncpy - copies n charaters from src to dest
 * @dest: the address of the destination string
 * @src: the address of the source string
 * @n: the number of characters to copy
 *
 * Description: copies n characters from src to dest and pads the string with n
 * null bytes if len(src) < n
 *
 * Return: returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *start;

	i = 0;
	start = dest;
	while ((i < n) && (*(dest + i) = *(src + i)))
		i++;	

	while (i < n)
		*(dest + i++) = '\0';
	return (start);
}
