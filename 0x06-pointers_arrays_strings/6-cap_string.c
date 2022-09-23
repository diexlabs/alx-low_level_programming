#include "main.h"

/**
 * cap_string - capitalizes the first character of every word to upper case
 * @s: the string to transpose
 *
 * Return: the string
 */

char *cap_string(char *s)
{
	int i, tr, next;
	char c;

	tr = 'a' - 'A';
	i = 0;
	next = 1;
	while ((c = *(s + i)))
	{
		switch (c)
		{
		case ' ':
		case '\t':
		case '\n':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
			next = 1;
			break;
		default:
			if (c >= 'a' && c <= 'z' && next)
			{
				*(s + i) = c - tr;
				next = 0;
				break;
			}
			else
			{
				next = 0;
				break;
			}
		}
		i++;
	}

	return (s);
}
