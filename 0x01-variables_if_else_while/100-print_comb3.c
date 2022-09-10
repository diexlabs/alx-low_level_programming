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

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			if (y > x && y != x)
			{
				putchar(x);
				putchar(y);
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
