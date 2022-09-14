#include "main.h"

/**
 * main - main entry point of the program
 *
 * Description: runs the other functions
 *
 * Return: returns 1
 */

int main(void)
{
	_putchar(print_sign(2) + '0');
	_putchar(print_sign(-2) + '0');
	_putchar(print_sign(0) + '0');

	return (1);
}

/**
 * print_sign - prints a sign
 * @n: number to check sign
 *
 * Description: determins the sign of number
 *
 * Return: returns the sign or 0
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
