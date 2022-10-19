#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - checks for a string in an array
 * @format: the format string
 *
 * Return: 1 if found or 0
 */

int _printf(const char *format, ...)
{
	va_list ptr;
	int i, temp, *cp;
	char f;
	formatter_t formatter;

	va_start(ptr, format);
	i = 0;
	while (*(format))
	{
		if (*(format) == '%')
		{
			format++;
			while ((*format < 'a') && (*format > 'z') && (*format != '%'))
			{
				format++;
				continue;
			}

			f = *format;
			switch (f)
			{
			case '%':
				write(1, "%", 1);
				i++;
				break;
			case 'd':
			case 'i':
				formatter = get_formatter('i');
				temp = va_arg(ptr, int);
				i += formatter.format(&temp);
				break;
			default:
				formatter = get_formatter(f);
				cp = va_arg(ptr, int *);
				i += formatter.format(cp);
			}
			format++;
		}
		else
		{
			write(1, format, 1);
			i++;
			format++;
		}
	}
	va_end(ptr);

	return (i);
}
