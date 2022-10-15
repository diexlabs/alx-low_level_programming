#include "function_pointers.h"

/**
 * array_iterator - a function that performs action on all array elements
 * @array: an array to work on
 * @size: the size of the array
 * @action: the action to carry out on all array elements
 *
 * Return: void
 */

void array_iterator(int *array, int size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
