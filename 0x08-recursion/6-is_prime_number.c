#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: returns 1 as true or 0 as false
 */

int is_prime_number(int n)
{
	int check;

	check = primeno(n, n / 2);
	if (check == 1)
		return (1);
	else
		return (0);
}

/**
 * primeno - checks for prime
 * @n: number to check
 * @i: next iteration
 *
 * Return: 1 if the number is prime
 */

int primeno(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (n % i == 0)
			return (0);
		else
			return (primeno(n, i - 1));
	}
}
