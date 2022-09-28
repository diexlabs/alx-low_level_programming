#include "main.h"

/**
 * _strspn - calculates the length of a prefix
 * @s: the string to search
 * @accept: the character constituents of prefix
 *
 * Return: the number of occurrences
 */

unsigned int _strspn(char *s, char *accept)
{
	int n;

	n = 0;
	while (*(s + n) != '\0' && _contains(accept, *(s + n)))
		n++;

	return (n);
}

/**
 * _contains - checks if a string contain a character
 * @s: the string to search
 * @c: the character to search for
 *
 * Return: returns 1 if it is present else return 0
 */

int _contains(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i++) == c)
			return (1);
	}

	return ('\0');
}
