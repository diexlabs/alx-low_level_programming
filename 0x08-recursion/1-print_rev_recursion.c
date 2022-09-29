#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse using recursion
 * @s: A pointer to the string
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*(s + 1))
		_print_rev_recursion(s + 1);
	_putchar(*s);
}
