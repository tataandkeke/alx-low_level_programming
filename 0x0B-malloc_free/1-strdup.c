#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string into a new memory location
 * @str: string to copy
 * Return: Return NULL if it fails
 */

char *_strdup(char *str)
{
	int length = strlen(str);
	char *newstring = (char *)malloc(sizeof(char) * length);

	if (str == NULL || newstring == NULL)
	{
		return (NULL);
	}

	return (newstring);
}
