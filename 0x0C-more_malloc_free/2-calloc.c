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

	char *newArray = (char *)malloc(sizeof(char) * size);

	if (newArray == NULL)
	{
		return (NULL);
	}

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		newArray[i] = 0;
	}

	return (newArray);
}
