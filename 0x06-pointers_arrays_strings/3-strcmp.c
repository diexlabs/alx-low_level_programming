#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the address of the first string to compare
 * @s2: the address of the second string to compare
 *
 * Return: returns 0 if equal, -1 if s1 is less and 1 if s1 is greater
 */

int _strcmp(char *s1, char *s2)
{
	int i, ret;
	char c, d;

	i = 0;
	while ((c = *(s1 + i)) == (d = *(s2 + i)))
	{
		i++;
		if (c == '\0')
			return (0);
	}

	if (c < d)
		ret = -15;
	else if (c > d)
		ret = 15;

	return (ret);
}
