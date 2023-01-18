#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: the array
 * @size: the number of elements in array
 * @cmp: a function
 * Return: returns
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);


}
