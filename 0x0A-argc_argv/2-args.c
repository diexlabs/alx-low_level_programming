#include <stdio.h>

/**
 * main - main entry into the program
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: always return 0 unless there was an error
 */

int main(int argc, char *argv[])
{
	int i;

	i = 1;
	while (i < argc)
		printf("%s\n", argv[i++]);

	return (0);
}
