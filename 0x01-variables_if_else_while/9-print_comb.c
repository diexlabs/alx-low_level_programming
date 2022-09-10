#include <stdio.h>

/**
 * main - main entry point
 *
 * Description: prints all combination of single digits
 *
 * Return: always returns zero
 */

int main(void)
{
	for (int x = '0'; x <= '9'; x++)
	{
		for (int y = '0'; y <= '9'; y++)
		{
			putchar(x);
			putchar(y);
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
