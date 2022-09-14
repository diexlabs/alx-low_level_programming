#include "main.h"

/**
 * times_table - a times table
 *
 * Description: prints the 9 times table
 *
 * Return: returns void
 */

void times_table(void)
{
	int col, row, prod;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			prod = row * col;

			if (col == 0)
			{
				_putchar('0');
				_putchar(',');
				continue;
			}

			_putchar(' ');
			if (prod < 10)
				_putchar(' ');
			else
				_putchar('0' + (prod / 10));
			_putchar('0' + (prod % 10));
			if (col != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
