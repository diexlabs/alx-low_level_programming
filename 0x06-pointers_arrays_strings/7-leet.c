#include "main.h"

/**
 * leet - encodes a string to 1337
 * @s: the string to encode
 *
 * Return: string
 */

char *leet(char *s)
{
	char c;
	int i;

	i = 0;
	while ((c = *(s + i)))
	{
		if (c == 'a' || c == 'A')
			*(s + i) = '4';
		else if (c == 'e' || c == 'E')
			*(s + i) = '3';
		else if (c == 'o' || c == 'O')
			*(s + i) = '0';
		else if (c == 't' || c == 'T')
			*(s + i) = '7';
		else if (c == 'l' || c == 'L')
			*(s + i) = '1';

		i++;
	}
	return (s);
}
