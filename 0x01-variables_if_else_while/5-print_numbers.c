#include <stdio.h>

/**
 * main - main entry point
 *
 * Description: prints all decimals
 *
 * Return: always returns zero
 */

int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
		printf("%d", c);
	putchar('\n');

	return (0);
}
