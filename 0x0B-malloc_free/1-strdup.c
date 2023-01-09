#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string into a new memory location
 * @str: string to copy
 * Return: Return NULL if it fails
 */

char *_strdup(char *str)
{
	int i;
	int length = strlen(str);
	char *newstring = (char *)malloc(sizeof(char) * length + 1);

	if (str == NULL || newstring == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		newstring[i] = str[i];
	}


	return (newstring);
}
