#include "main.h"

/**
 * _strlen_recursion - returns the lenth of a string
 * @s: A pointer to the string
 *
 * Return: returns the length
 */

int _strlen_recursion(char *s)
{
	if (*(s + 1) == '\0')
		return (1);
	else
		return (1 + _strlen_recursion(s + 1));
}
