#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the address of the string as input
 *
 * Return: returns void
 */

void puts_half(char *str)
{
	int i, length;

	i = 0;
	while (*(str + i) != '\0')
		i++;

	length = (i % 2 == 0) ? i / 2 : (i - 1) / 2;
	for (i -= length; length > 0; i++, length--)
		_putchar(*(str + i));

	_putchar('\n');
}
