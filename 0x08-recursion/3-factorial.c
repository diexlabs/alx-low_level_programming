#include "main.h"

/**
 * factorial - returns a factorial of a given number
 * @n: an integer
 *
 * Return: returns the factorial if n is integer else return -1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
