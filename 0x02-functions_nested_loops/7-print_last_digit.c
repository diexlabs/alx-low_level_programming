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
	_putchar('0' + (n % 10));
	return (n % 10);
}
