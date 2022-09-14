#include "_putchar.c"
#include "main.h"

/**
 * main - entry point
 *
 * Description: runs the other functions
 *
 * Return: always returns 1
 */

int main(void)
{
	_putchar(_islower('A') + '0');
	_putchar(_islower('a') + '0');


	return (0);
}

/**
 * _islower - checks for lower case
 * @c: an inter representing a char code
 *
 * Description: checks to see if a number is lowercase char
 *
 * Return: returns either 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
