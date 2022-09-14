#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: a decimal number
 *
 * Description: prints the last integer of a number
 *
 * Return: returns the last number
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	_putchar('0' + (n % 10));
	return (n % 10);
}
