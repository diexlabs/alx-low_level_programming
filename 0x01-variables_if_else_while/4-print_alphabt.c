#include <stdio.h>

/**
 * main - main entry point
 *
 * Description - prints all characters except two
 *
 * Return: always returns zero
 */

int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
			continue;
		putchar(c);
	}

	putchar('\n');

	return (0);
}
