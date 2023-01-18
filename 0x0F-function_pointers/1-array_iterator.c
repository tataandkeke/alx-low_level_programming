#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - prints a name
 * @array: the array
 * @size: the size of the array
 * @action: the pointer to a function
 * Return: returns
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	int a;

	a = (int)size;

	if (!action || !array)
		return;

	for (i = 0; i < a; i++)
	{
		action(array[i]);
	}
}
