#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a two dimensional array of integers
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: a pointer to the resulting grid
 */

int **alloc_grid(int width, int height)
{
	int **g;
	int i;

	g = malloc(height * sizeof(int *));

	for (i = 0; i < width; i++)
		g[i] = malloc(width * sizeof(int));

	return (g);
}
