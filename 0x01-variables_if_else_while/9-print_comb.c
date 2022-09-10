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
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);

		if (x < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
