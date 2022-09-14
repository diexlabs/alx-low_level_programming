#include "_putchar.c"
#include "main.h"

/**
 * main - major entry point
 *
 * Description: runs the other function
 *
 * Return: always returns 1
 */

int main(void)
{
	_putchar(_abs(43) + '0');
	_putchar(_abs(-100) + '0');

	return (1);
}

/**
 * _abs - computes absolute value
 * @n: number to compute its absolute value
 *
 * Description: computes the absolute value of a number
 *
 * Return: returns the absolute value
 */

int _abs(int n)
{
	if (n < 0)
		return (n - 2 * n);
	else
		return (n);
}
