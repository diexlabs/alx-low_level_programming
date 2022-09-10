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
	int chars[10] = {'0','1','2','3','4','5','6','7','8','9'};
	for (int x = 0; x <= 99; x++)
	{
		for (int y = 0; y <= 99; y++)
		{
			if (x != y && y > x)
			{
				putchar(chars[x / 10]);
				putchar(chars[x % 10]);
				putchar(' ');
				putchar(chars[y / 10]);
				putchar(chars[y % 10]);

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
