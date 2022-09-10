#include <stdio.h>

/**
 * main - main
 *
 * Description: prints all comination of two digits in a fancy way
 *
 * Return: always returns zero
 */

int main(void)
{
	int x, y;
	int cs[10] = {'0','1','2','3','4','5','6','7','8','9'};

	for (x = 0; x <= 99; x++)
	{
		for (y = 0; y <= 99; y++)
		{
			if (x != y && y > x)
			{
				putchar(cs[x / 10]);
				putchar(cs[x % 10]);
				putchar(' ');
				putchar(cs[y / 10]);
				putchar(cs[y % 10]);
				
				if (x < 98 || y < 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
