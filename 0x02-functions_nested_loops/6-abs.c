#include "main.h"

/**
 * _abs - computes absolute value
 * @n: number to compute its absolute value
 *
 * Description: computes the absolute value of a number
 *
 * Return: returns the absolute value
 */

int _abs(int n)
{
	if (n < 0)
		return (n - 2 * n);
	else
		return (n);
}
