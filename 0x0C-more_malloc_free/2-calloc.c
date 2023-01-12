#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * _calloc - allocates a memory and checks
 * @nmemb: amount of memory
 * @size: size
 * Return: returns a pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *newArray;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}

	newArray = malloc(nmemb * size);

	if (newArray == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		newArray[i] = 0;
	}

	return (newArray);
}
