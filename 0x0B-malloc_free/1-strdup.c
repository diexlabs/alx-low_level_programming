#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string and returns its memory address
 * @str: the string to duplicate
 *
 * Return: returns the memory address of the duplicate
 */

char *_strdup(char *str)
{
	int n;
	char *p;

	if (str == NULL)
		return (NULL);

	n = 0;
	while (*(str + n))
		n++;

	p = malloc((n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);

	n = 0;
	while (str[n])
	{
		p[n] = str[n];
		n++;
	}
	p[n] = '\0';

	return (p);
}
