#include "main.h"

/**
 * print_number - print a long number
 * @n: the integer to print
 *
 * Description: prints a long int using only _putchar
 *
 * Return: void
 */

void print_number(int n)
{
    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    if (n / 10)
        _print(n / 10);
    putchar(n % 10 + '0');
}
