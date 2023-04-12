#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 D array of integers
 * @width: Width of the array
 * @height: Height of the array
 * Return: pointer to a 2D of integers.
 */
int **alloc_grid(int width, int height)
{
	int **gridwh;
	int h, w;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	gridwh = malloc(sizeof(int *) * height);
	if (gridwh == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		gridwh[h] = malloc(sizeof(int) * width);
		if (gridwh[h] == NULL)
		{
			for (; h >= 0; h--)
			{
				free(gridwh[h]);
			}
			free(gridwh);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			gridwh[h][w] = 0;
	}
	return (gridwh);
}
