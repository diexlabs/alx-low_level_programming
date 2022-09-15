#include "main.h"

/**
 * _isdigit - checks for digit number
 * @c: the character code to check
 *
 * Description: checks if a character code is a digit
 *
 * Return: returns 1 if true else returns 0
 */

int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
