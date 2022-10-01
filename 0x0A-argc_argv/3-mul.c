#include <stdio.h>

/**
 * main - multiplies two numbers and returns the product
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: returns product else if wrong argc return 1 and print Error
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	mul = (*argv[1] - '0') * (*argv[2] - '0');
	printf("%d\n", mul);
	return (0);
}
