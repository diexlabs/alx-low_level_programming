#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a two dimensional grid
 * @grid: the grid to free
 * @height: the height of the grid to free
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 1; i < height; i++)
		free(grid[i]);

	free(grid);
}
