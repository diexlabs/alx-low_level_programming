#include "main.h"

/**
 * print_triangle - prints triangle to the console
 * @n: the size of the triangle
 *
 * Description: prints a triangle of given size
 *
 * Return: void
 */

void print_triangle(int n)
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
		{
			if (x >= (n - y))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
