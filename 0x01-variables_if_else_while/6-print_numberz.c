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
	for (int n = '0'; n <= '9'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
