#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return void
 */

void rev_string(char *s)
{
	int i, j, length, c;
	char str[1000];

	i = 0;
	while ((c = *(s + i)) != '\0')
		i++;
	length = i;

	j = 0;
	while (length >= 0)
	{
		str[j] = *(str + length);
		putchar(str[j]);
		j++;
		length--;
	}

	j = 0;
	while (j < i)
	{
		*(s + j) = str[j];
		j++;
	}
}
