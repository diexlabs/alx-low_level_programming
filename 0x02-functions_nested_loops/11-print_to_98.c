#include "main.h"

/**
 * print_to_98 - prints up to 98
 * @n: number to start from
 *
 * Description: prints up to or down to 98
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			print(n);

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			print(n);

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	_putchar('\n');
}

/**
 * print - prints long number
 * @n: number to print
 *
 * Description: prints a number to the console
 *
 * Return: void
 */

void print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print(n / 10);

	_putchar('0' + (n % 10));
}
