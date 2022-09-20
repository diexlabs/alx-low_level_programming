#include "main.h"

/**
 * puts2 - prints even numbered characters of a string
 * @str: the address of the string
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;
	char c;

	i = 0;
	while ((c = *(str + i)) != '\0')
	{
		if (i % 2 == 0)
			_putchar(c);
		i++;
	}
	_putchar('\n');
}
