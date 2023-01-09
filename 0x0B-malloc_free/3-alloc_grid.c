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
	int i;
	int j;
	int *ap;

	int *newarray = (int *)malloc(sizeof(int) * width * height);

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			*(newarray + i * width + j) = i + j;
		}
	}

	ap = newarray;
	return (ap);
}
