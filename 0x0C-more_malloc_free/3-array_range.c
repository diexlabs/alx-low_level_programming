#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates a new array of ints
 * @min: the start of the range
 * @max: the stop of the range
 *
 * Return: an address pointer to the new array or NULL if error
 */

int *array_range(int min, int max)
{
	int *ptr, n;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * (max - min + 1));
	if (!ptr)
		return (NULL);

	n = 0;
	while (min <= max)
		ptr[n++] = min++;

	return (ptr);
}
