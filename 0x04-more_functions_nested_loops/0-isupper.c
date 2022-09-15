#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to check
 *
 * Description: this function checks for the presence of uppercase character
 *
 * Return: returns 1 if true or 0 otherwise
 */

int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
