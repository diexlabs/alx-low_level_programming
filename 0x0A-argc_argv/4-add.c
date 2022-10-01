#include <stdio.h>
#include "main.h"

/**
 * main - adds positive numbers and returns the sum
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: returns 0 or 1 if there is an error
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}
	else
	{
		i = 1;
		sum = 0;
		while (argv[i])
		{
			if (myAtoi(argv[i]) < 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += myAtoi(argv[i]);
			}
			i++;
		}


		printf("%d\n", sum);
	}

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

