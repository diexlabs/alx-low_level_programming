#include <stdio.h>

/**
 * main - main entry point
 *
 * Description: prints all numbers of base 16
 *
 * Return: always return zero
 */

int main(void)
{
	for (int c = '0'; c <= '9'; c++)
		putchar(c);
	for (int c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
