#include "main.h"

/**
 * print_most_numbers - prints single intergers
 *
 * Description: prints all integers less than 10 except 2 and 4
 *
 * Return: returns void
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n != 2 && n != 4)
			_putchar('0' + n);
	}

	_putchar('\n');
}
