#include "main.h"
#include <stdio.h>

/**
 * main - major entry point
 *
 * Description: The popular fizz buzz program
 *
 * Return: always returns 0
 */

int main(void)
{
	int n;

	for (n = 0; n <= 100; n++)
	{
		if ((n % 5 == 0) && (n % 3 == 0))
		{
			fizz();
			buzz();
		}
		else if (n % 5 == 0)
		{
			buzz();
		}
		else if (n % 3 == 0)
		{
			fizz();
		}
		else
		{
			if (n / 100)
			{
				putchar('0' + (n / 100));
				putchar('0' + (n % 100) / 10);
				putchar('0' + (n % 10));
			}
			else if (n / 10)
			{
				putchar('0' + (n / 10));
				putchar('0' + (n % 10));
			}
			else
			{
				putchar('0' + n);
			}
		}
		putchar(' ');
	}
	putchar('\n');

	return (0);
}

/**
 * fizz - prints fizz
 *
 * Description: prints fizz to the console
 *
 * Return: void
 */

void fizz(void)
{
	putchar('F');
	putchar('i');
	putchar('z');
	putchar('z');
}


/**
 * buzz - prints buzz
 *
 * Description: prints Buzz to the console
 *
 * Return: void
 */

void buzz(void)
{
	putchar('B');
	putchar('u');
	putchar('z');
	putchar('z');
}
