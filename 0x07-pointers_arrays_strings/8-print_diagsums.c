#include "main.h"
#include "stdio.h"

/**
 * print_diagsums - prints the sum of each diagonal
 * @a: the first element of a 2d array
 * @size: the size of the matrix
 *
 * Return: returns nothing
 */

void print_diagsums(int *a, int size)
{
	int major, minor, i, j;

	major = 0;
	minor = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				major += *(a + (j + i * size) * 4);

			if (i + j == size - 1)
				minor += *(a + (j + i * size) * 4);
		}
	}

	printf("%d, %d\n", major, minor);
}
