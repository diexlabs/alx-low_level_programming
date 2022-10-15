#include "3-calc.h"

/**
 * op_add - add two ints and returns result
 * @a: first operand
 * @b: seconde operand
 *
 * Return: returns the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of two ints
 * @a: first operand
 * @b: second operand
 *
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the products of two numbers
 * @a: first operand
 * @b: second operand
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the quotient of two integers
 * @a: numerator
 * @b: denominator
 *
 * Return: quotient
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gets the modulo of its operands
 * @a: first operand
 * @b: second operand
 *
 * Return: modulo
 */
int op_mod(int a, int b)
{
	return (a % b);
}
