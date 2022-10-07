#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concats n bytes of str s2 to s1
 * @s1: the base string
 * @s2: the target str to be concatenated
 * @n: the number of bytes to concatenate
 *
 * Return: returns pointer to new string or NULL if error
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int n1, n2, i;

	n1 = _str_len(s1);
	n2 = _str_len(s2);

	if (n > n2)
		ptr = malloc(sizeof(*ptr) * (n + 1));
	else
		ptr = malloc(sizeof(*ptr) * (n2 + 1));

	if (!ptr)
		return (NULL);

	i = 0;
	if (n1)
	{
		for (i = 0; s1[i]; i++)
			ptr[i] = s1[i];
	}
	if (n2)
	{
		for (n2 = 0; (n > 0) && s2[n2]; i++, n--, n2++)
			ptr[i] = s2[n2];
	}
	ptr[i] = '\0';

	return (ptr);
}

/**
 * _str_len - counts the length of the string
 * @str: the string to count
 *
 * Return: returns the length of the string or 0 if str is NULL
 */

int _str_len(char *str)
{
	int n, i;

	n = 0;
	if (!str)
		return (0);


	while (str[i++])
		n++;
	return (n);
}
