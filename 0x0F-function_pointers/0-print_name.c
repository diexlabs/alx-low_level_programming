#include "function_pointers.h"

/**
 * print_name - prints a name given a pointer to a function
 * @name: the string name to print
 * @f: a pointer to a function to print a name
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
