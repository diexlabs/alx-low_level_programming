#include "function_pointers.h"

/**
 * int_index - searches for a number and returns index
 * @array: array of numbers to search
 * @size: size of the given array
 * @cmp: pointer to function that carries out comparison
 *
 * Return: int indicating index of found number; -1 if otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
