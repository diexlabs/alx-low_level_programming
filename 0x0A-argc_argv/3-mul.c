#include <stdio.h>
#include "main.h"

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

	mul = myAtoi(argv[1]) * myAtoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}

/**
 * myAtoi - converts string to int or returns -1
 * @str: the string to convert
 *
 * Return: returns the integer value or -1
 */

int myAtoi(char *str)
{
	int res;
	int i;

	res = 0;
	for (i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] - '0' < 0 || str[i] - '0' > 9)
			return (-1);
		res = res * 10 + str[i] - '0';
	}
	return (res);
}
