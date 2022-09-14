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
	int last;

	last = n % 10;
	if (last < 0)
		last = -last;
	_putchar('0' + last);
	return (last);
}
