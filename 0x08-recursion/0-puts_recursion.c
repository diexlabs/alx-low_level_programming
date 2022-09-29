#include "main.h"

/**
 * _puts_recursion - prints a string using recurstion
 * @s: the pointer to the string
 *
 * Return: returns void
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	++s;
	if (*s)
		_puts_recursion(s);
	else
		_putchar('\n');
}
