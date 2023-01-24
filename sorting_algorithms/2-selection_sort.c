#include "sort.h"

/**
* selection_sort - selection sort implementation in c
* @array: array to sort
* @size: the size of the array
*
* Description: array contains only int values
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;
	int temp;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		min_index = i;

		for (j = i + 1; j < size; j++)
		{
		if (array[j] < array[min_index])
			min_index = j;
		}
		temp = array[i];
		array[i] = array[min_index];
		array[min_index] = temp;

		print_array(array, size);
	}
}
