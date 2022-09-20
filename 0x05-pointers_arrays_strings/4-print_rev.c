#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @str: the memory location of first char
 *
 * Return: void
 */

void print_rev(char *str)
{
	int i;

	i = 0;
	while (1)
	{
		if (*(str + i) == '\0')
			break;
		i++;
	}

	for (; i >= 0; i--)
	       _putchar(*(str + i));

	_putchar('\n');
}
