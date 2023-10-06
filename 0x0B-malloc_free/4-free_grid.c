#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - a function that frees a 2 dimensional grid
 * @grid: 2 dimentional array
 * @height: array height
 *
 */

void free_grid(int **grid, int height)
{

	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
