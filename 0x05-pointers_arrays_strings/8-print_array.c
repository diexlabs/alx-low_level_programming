#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n members of an array
 * @a: the address of the array to pring
 * @n: the number of elements to print
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (n--)
		printf((n != 0) ? "%d, " : "%d\n", a[i++]);
}
