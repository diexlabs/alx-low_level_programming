#include <stdio.h>

/**
 * main - main entry point
 *
 * Description: prints alphabets in both cases
 *
 * Return: always return zero
 */

int main(void)
{
	int c;
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
