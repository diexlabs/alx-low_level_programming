#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @c: the string to calculate the length
 *
 * Return: returns the length of the string
 */

int _strlen(char *c)
{
	int length, i;

	i = 0;
	length = 0;
	while (*(c + i++) != '\0')
		length++;

	return (length);
}
