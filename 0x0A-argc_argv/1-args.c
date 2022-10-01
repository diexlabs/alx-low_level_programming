#include <stdio.h>

/**
 * main - main entry into the programme
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: 0 unless there is error, return other int
 */

int main(int argc, char **argv)
{
	int n;

	n = 0;
	while (*argv++)
		n++;

	printf("%d\n", argc - 1);
	return (0);
}
