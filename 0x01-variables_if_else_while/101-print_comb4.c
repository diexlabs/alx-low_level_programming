#include <stdio.h>

/**
 * main - main entry point
 *
 * Description: prints all possible combination of three digits
 *
 * Return: always returns zero
 */

int main(void)
{
	for (int x = '0'; x <= '9'; x++)
	{
		for (int y = '0'; y <= '9'; y++)
		{
			for (int z = '0'; z <= '9'; z++)
			{
				if ( y > x && z > y && (x != y && y != z))
				{
					putchar(x);
					putchar(y);
					putchar(z);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
