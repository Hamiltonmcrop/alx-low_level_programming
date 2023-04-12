#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid or array.
 * @grid: The 2D array/grid
 * @height: The grid/array height
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
