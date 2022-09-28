#include "main.h"

/**
 * _strstr - checks for a substring in a string
 * @haystack: the string to search
 * @needle: the substring to search for
 *
 * Return: return the substring if it exists otherwise return NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	i = 0;
	while (*(haystack + i))
	{
		if (_compare(haystack + i, needle))
			return (haystack + i);
		i++;
	}

	return ('\0');
}

/**
 * _compare - checks if a string starts with another string
 * @str: the string to compare
 * @cmp: the string to check if it matches
 *
 * Return: returns 1 if cmp starts with str else return 0
 */

int _compare(char *str, char *cmp)
{
	int i;

	i = 0;
	while (*(cmp + i))
	{
		if (*(cmp + i) != *(str + i))
			return (0);
		i++;
	}

	return (1);
}
