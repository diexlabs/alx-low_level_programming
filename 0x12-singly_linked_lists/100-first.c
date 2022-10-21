#include <stdio.h>

/**
 * __attribute__ - runs code before main is called
 *
 * Return: void
 */

void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
