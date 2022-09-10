#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints the alphabets in lowercase
 *
 * Return: always returns zero
 */

int main(void)
{
	int c = 'a';

	while (c >= 'a' && c <= 'z')
		putchar(c++);
	putchar('\n');

	return (0);
}
