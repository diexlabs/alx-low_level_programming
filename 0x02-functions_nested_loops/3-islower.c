#include "main.h"

/**
 * _islower - checks for lower case
 * @c: an inter representing a char code
 *
 * Description: checks to see if a number is lowercase char
 *
 * Return: returns either 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
