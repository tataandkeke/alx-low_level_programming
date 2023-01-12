#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates a memory and checks
 * @b: amount of memory
 * Return: returns a pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *newMem;

	*newMem = (int *)malloc(sizeof(int) * b);

	if (newMem == NULL)
	{
		exit(98);
	}
	else
	{
		return (newMem);
	}
}
