#include "main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(INT_MIN);
	printf("%d is the remainder", r);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
