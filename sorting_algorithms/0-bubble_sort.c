#include "sort.h"

/**
* bubble_sort - implementation of bubble sort algorith
* @array: array input to sort
* @size: size of the array input
*
* Description: compares adjacent items and swaps them using
* double iteration
*/
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
			print_array(array, size);
		}
	}
}
