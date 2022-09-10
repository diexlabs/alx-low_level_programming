#include <stdio.h>

/**
 * main - main entry point
 *
 * Description: prints all combination of digits without repetition
 *
 * Return: always returns zero
 */

int main(void)
{
	int x, y;

	x = '0';
	while (x <= '9')
	{
		y = '0';
		while (y <= '9')
		{
			if (y > x && y != x)
			{
				putchar(x);
				putchar(y);

				if (x != '8' || y != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		x++;
	}
	putchar('\n');

	return (0);
}
