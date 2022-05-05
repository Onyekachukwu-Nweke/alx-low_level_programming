#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free the grid
 * @grid: memory
 * @height: height
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
