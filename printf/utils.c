#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * format_c - prints a char token
 * @c: the char token to write to std output
 *
 * Return: 1 if success or exit with 71 error code if error
 */

int format_c(int *c)
{
	int i;
	char *ch;

	ch = (char *)c;
	i = write(1, ch, 1);
	if (i < 0)
	{
		write(2, "Error: write failed", 19);
		exit(71);
	}
	return (i);
}

/**
 * format_s - writes a string to std output
 * @s: the string pointer
 *
 * Return: the number of characters written or exit with error code 72 if error
 */

int format_s(int *s)
{
	int i, r;
	char *sh;

	sh = (char *)s;
	while (*sh)
	{
		r =  write(1, sh, 1);
		if (r < 0)
		{
			write(2, "Error: write failed", 19);
			exit(72);
		}
		sh++;
		i += r;
	}
	return (i);
}

/**
 * format_i - writes an integer to std output
 * @ptr: int to write out
 *
 * Return: the number of bytes written out or exit with error code 73 if error
 */

int format_i(int *ptr)
{
	int i;

	i = 0;
	itos(*ptr, &i);
	return (i);
}

/**
 * itos - prints out a number as a sequence of characters
 * @n: the number to print
 * @c: the count of characters printed
 *
 * Return: c else exit with error code 50
 */
void itos(int n, int *c)
{
	int i;
	char ch[2];

	if (n < 0)
	{
		i = write(1, "-", 1);
		if (i < 0)
		{
			write(2, "Error: write failed\n", 20);
			exit(50);
		}

		*c += 1;
		itos(-n, c);
	}
	else
	{
		if (n > 10)
			itos(n / 10, c);

		ch[0] = '0' + (n % 10);
		ch[1] = '\0';
		i = write(1, ch, 1);
		if (i < 0)
		{
			write(2, "Error: write failed\n", 20);
			exit(50);
		}

		*c += 1;
	}
}
