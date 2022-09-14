#include "_putchar.c"

/**
 * main - main entry point
 *
 * Description: prints a specified string
 *
 * Return: always returns zero
 */

int main(void)
{
	int str[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');

	return (0);
}
