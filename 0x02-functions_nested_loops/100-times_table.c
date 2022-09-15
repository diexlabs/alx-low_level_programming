#include "main.h"

/**
 * print_times_table - prints times table
 * @n: the size of the table
 *
 * Description: prints an n X n times table
 *
 * Return: returns void
 */

void print_times_table(int n)
{
	int row, col, prod;

	if (n < 0 || n > 15)
		return;

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			if (col == 0)
			{
				_putchar('0');
				_putchar(',');
				continue;
			}

			_putchar(' ');
			prod = col * row;
			if (prod / 100)
			{
				_putchar('0' + (prod / 100));
				_putchar('0' + (prod % 100) / 10);
				_putchar('0' + (prod % 10));
			}
			else if (prod / 10)
			{
				_putchar(' ');
				_putchar('0' + (prod / 10));
				_putchar('0' + (prod % 10));
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + prod);
			}

			if (col != n)
				_putchar(',');
		}

		_putchar('\n');
	}
}
