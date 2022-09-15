#include <stdio.h>

int fibonacci(int);

/**
 * main - main entry point
 *
 * Description: prints fibonacci numbers less than a specified number
 *
 * Return: void
 */

int main(void)
{
	fibonacci(10);

	return (0);
}

/**
 * fibonacci - get prints fibonacci numbers
 * @n: terms of fibonacci number
 *
 * Description: prints fibonacci number less than n
 *
 * Return: nth term fibonacci number;
 */

int fibonacci(int n)
{
	int f;

	if (n == 0 || n == 1)
	{
		printf("%d, ", n);
		return (n);
	}
	else
	{
		f = fibonacci(n - 1) + fibonacci(n - 2);
		printf("%d, ", f);
		return (f);
	}
}
