#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2D array
 *
 * @grid: two-dimensional array
 *
 * @height: height of the array
 *
 * Return: a deallocated memory space
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
