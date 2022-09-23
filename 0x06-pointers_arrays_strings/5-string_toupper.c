#include "main.h"

/**
 * string_toupper - changes lowercase characters to upper
 * @s: the string to transpose
 *
 * Return: pointer to s
 */

char *string_toupper(char *s)
{
	int tr, i;
	char c;

	tr = 'a' - 'A';
	i = 0;
	while ((c = *(s + i)))
	{
		if (c >= 'a' && c <= 'z')
			*(s + i) = c - tr;
		i++;
	}

	return (s);
}
