#include "holberton.h"

/**
 * free_grid - free memory
 * @grid: destination parameter
 * @height: source parameter
 *
 *
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0 ; j < height ; j++)
		free(grid[j]);
	free(grid);
}
