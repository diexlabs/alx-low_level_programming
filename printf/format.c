#include <stddef.h>
#include "main.h"


/**
 * get_formatter - gets the appropriate formatter class
 * @c: the formatter key
 *
 * Return: the formatter with appropriate key or 0 to signal not found
 */

formatter_t get_formatter(char c)
{
	formatter_t formatters[] = {
		{'c', format_c},
		{'s', format_s},
		{'d', format_i},
		{'i', format_i},
		{'\0', NULL}
	};
	int i;

	for (i = 0; i < 5; i++)
	{
		if (formatters[i].key == c)
			return formatters[i];
	}

	return formatters[5];
}
