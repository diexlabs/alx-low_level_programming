#include "main.h"

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
				_putchar('0' + (n / 100));
				_putchar('0' + (n % 100) / 10);
				_putchar('0' + (n % 10));
			}
			else if (n / 10)
			{
				_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));
			}
			else
			{
				_putchar('0' + n);
			}
		}
		_putchar(' ');
	}
	_putchar('\n');
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
	_putchar('F');
	_putchar('i');
	_putchar('z');
	_putchar('z');
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
	_putchar('B');
	_putchar('u');
	_putchar('z');
	_putchar('z');
}
