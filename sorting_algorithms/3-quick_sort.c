#include "sort.h"

/**
* lomuto_partition - implementation of lomuto partion scheme
* @array: array of int
* @low: lower boundary of operation
* @high: upper bound of operation
*
* Description: lomuto partioning scheme for quick sort algorithm
* Return: index of the pivot element after swapping
*/
int lomuto_partition(int *array, int low, int high)
{
	int pivot = array[high];
	int j;
	int i = low - 1;

	for (j = low; j < high; j++)
	{
		if (pivot >= array[j])
		{
		i++;
		swap(array, i, j);
		}
	}
	swap(array, i + 1, high);
	return (i + 1);
}

/**
* swap - swaps two elements of an array given their indexes
* @array: the containing array
* @i: the first index
* @j: the second index
*
* Description: swaps two elements from their indices. out of bound
* error might be thrown if given index is out of range
*/
void swap(int array[], int i, int j)
{
	int temp;

	temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}

/**
* quicksort_helper - wrapper around quicksort algorithm
* @array: array to sort
* @low: the lower bound of sorting operation
* @high: the upper bound of sorting operation
* @size: the size of the array used for printing
*
* Description: this provides a consistent interface for the
* quicksort sorting algorighm
*/
void quicksort_helper(int array[], int low, int high, size_t size)
{
	int partition;

	if (low < high)
	{
		partition = lomuto_partition(array, low, high);
		print_array(array, size);
		quicksort_helper(array, low, partition - 1, size);
		quicksort_helper(array, partition + 1, high, size);
	}
}

/**
* quick_sort - implementation of quick sort
* @array: array to sort
* @size: size of the array
*
* Description: array contains only integer values
*/
void quick_sort(int *array, size_t size)
{
	quicksort_helper(array, 0, size - 1, size);
}
