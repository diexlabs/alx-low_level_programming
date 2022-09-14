#include "_putchar.c"
#include "main.h"

/**
 * main - main entry for the programe
 *
 * Description: runs the other functions
 *
 * Return: always returns 1
 */

int main(void)
{
	_putchar(_isalpha('c') + '0');
	_putchar(_isalpha('-') + '0');

	return (0);
}

/**
 * _isalpha - checks for alpha
 * @c: a charcode
 *
 * Description: checks if charcode os alphabet
 *
 * Return: returns 1 or 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
