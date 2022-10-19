#include "main.h"
#include <stdio.h>

/**
 * main - program entry
 *
 * Return: success flag
 */

int main(void)
{
	int len, len2;

	_printf("this is going to be %c awesome!\n", "c");
	_printf("this is also a %s tutorial\n", "great");
	_printf("the %% thing and %s thing is also working\n", "string");
	len = _printf("Let's try to printf a simple sentence.\n");
    	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
    	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
    	printf("Negative:[%d]\n", -762534);
	_printf("the int %d was formated with %%i token just as %i was done by %%d token\n", 7, 8);
	return (0);
}
