#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array and allocate memory to it
 * @size: size of the array
 * @c: character to put in the array
 * Return: Return NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *newarray = (char *)malloc(sizeof(char) * size);

	if (newarray == NULL || size == 0)
	{
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		newarray[i] = c;
	}

	return (newarray);

}
