#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * array_range - allocates a memory and checks
 * @min: number of mem
 * @max: size of each byte
 * Return: returns a pointer to allocated memory
 */

int *array_range(int min, int max)
{
	int i;
	int *newArray;
	int ndiff = max - min;

	if (min > max)
	{
		return (NULL);
	}

	newArray = malloc(sizeof(int) * (ndiff + 1));

	if (newArray == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= ndiff; i++)
	{
		newArray[i] = min;
		min++;
	}
	return (newArray);
}
