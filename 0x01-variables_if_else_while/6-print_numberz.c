#include <stdio.h>

/**
 * main - main entry point
 *
 * Description: prints all digits with putchar
 *
 * Return: always returns zero
 */

int main(void)
{
	int n;
	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar('\n');

	return (0);
}
