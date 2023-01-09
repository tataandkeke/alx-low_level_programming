#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - creates a 2 dimension array grid
 * @width: width of grid
 * @height: height of grid
 * Return: Return NULL if it fails
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * 8);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * 4);
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
