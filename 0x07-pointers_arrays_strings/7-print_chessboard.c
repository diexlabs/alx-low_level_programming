#include "main.h"

/**
 * print_chessboard - prints a 2d array
 * @a: an 8 squared 2d array
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int x, y;
	char *c;

	y = 0;
	while (y < 8)
	{
		x = 0;
		while (x < 8)
		{
			c = a[0] + x + (y * 8);
			_putchar(*c);
			x++;
		}
		_putchar('\n');
		y++;
	}
}
