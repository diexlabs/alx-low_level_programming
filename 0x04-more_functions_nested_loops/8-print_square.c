#include "main.h"

/**
 * print_square - prints a square on the console
 * @n: the size of the square
 *
 * Description: prints a square of n size
 *
 * Return: void
 */

void print_square(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	y = n;
	while (y--)
	{
		x = n;
		while (x--)
			_putchar('#');
		_putchar('\n');
	}
}
