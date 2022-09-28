#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to search for
 *
 * Return: returns pointer to c if it exists or NULL if not
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);

		i++;
	}

	return ('\0');
}
