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
	for (int c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (int c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');
}
