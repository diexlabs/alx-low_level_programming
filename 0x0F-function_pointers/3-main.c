#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - carries out simple operations on int operands
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: 0 if successful else exit code
 */

int main(int argc, char **argv)
{
	char *s;
	int (*op)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	s = argv[2];
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((b == 0) && (*s == '/' || *s == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	op = get_op_func(s);
	if (!op)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", op(a, b));
	return (0);
}
