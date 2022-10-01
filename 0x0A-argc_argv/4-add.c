#include <stdio.h>

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
			if (sizeof(*argv[i]) != 4)
			{
				printf("%ld %ld\n", sizeof(*argv[i]), sizeof(int));
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += *argv[i];
			}
			i++;
		}


		printf("%d\n", sum);
	}

	return (0);
}
