#include "main.h"

/**
 * _strpbrk - checks for occurence of any character from a given group
 * @s: the string to search
 * @accept: the group of characters to search for
 *
 * Return: returns the address of the first occurence or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		if (_contains(accept, *(s + i)))
			return (s + i);
		i++;
	}
	return ('\0');
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

