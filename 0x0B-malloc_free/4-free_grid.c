#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free up a 2d array
 * @grid: 2d array
 * @height: height of the array
 * Return: Return NULL if it fails
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
