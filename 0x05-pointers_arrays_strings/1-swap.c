#include "main.h"

/**
 * swap_int - swaps two ints
 * @x: first interger to swap
 * @y: second integer to swap
 *
 * Return: returns void
 */

void swap_int(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}
