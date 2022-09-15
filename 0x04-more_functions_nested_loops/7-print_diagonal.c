#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: the length of the diagonal
 *
 * Description: prints / a n times forming a diagonal
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (x = n; x > 0; x--)
	{
		for (y = n; y > 0; y--)
		{
			if (y == x)
				_putchar('\\');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
