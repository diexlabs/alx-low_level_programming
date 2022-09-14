#include "main.h"

/**
 * print_alphabet - prints all alphabets
 *
 * Description: prints all alphabets in lowercase
 *
 * Return: returns void
 */

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);

	_putchar('\n');
}
