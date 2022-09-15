#include "main.h"

/**
 * print_numbers - prints single integers
 *
 * Description: prints all integers less than 10
 *
 * Return: returns void
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
		_putchar('0' + n);

	_putchar('\n');
}
