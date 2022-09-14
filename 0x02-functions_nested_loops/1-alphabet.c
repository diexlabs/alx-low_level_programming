#include "main.h"

/**
 * main - main entry point
 *
 * Description: runs the other function
 *
 * Return: always returns 1
 */

int main(void)
{
	print_alphabet();

	return (1);
}

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
