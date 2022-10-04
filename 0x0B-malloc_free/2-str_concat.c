#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings and returns new memory address
 * @s1: the base string
 * @s2: the second string
 *
 * Return: the memory address of the resulting string or NULL if error
 */

char *str_concat(char *s1, char *s2)
{
	int n, n1, n2;
	char *s;

	n1 = 0;
	if (s1)
	{
		while (s1[n1])
			n1++;
	}
	n2 = 0;
	if (s2)
	{
		while (s2[n2])
			n2++;
	}

	s = malloc((n1 + n2 + 1) * sizeof(char));
	if (!s)
		return (NULL);

	n = 0;
	n1 = 0;
	if (s1)
	{
		while (s1[n1])
			s[n++] = s1[n1++];
	}

	if (s2)
	{
		n2 = 0;
		while (s2[n2])
			s[n++] = s2[n2++];
	}
	s[n] = '\0';

	return (s);
}
