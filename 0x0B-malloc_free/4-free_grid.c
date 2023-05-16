#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees grid.
 * @grid: grid.
 * @height: height.
 */

void free_grid(int **grid, int height)
{
	int i;
	int *p;

	for (i = 0; i < height; i++)
	{
		p = grid[i];
		free(p);
	}
	free(grid);
}
