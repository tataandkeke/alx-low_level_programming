#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - join two string together
 * @s1: input
 * @s2: input
 * Return: returns a pointer
 */

char _strncat(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != '\0' || s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
	}

	return (0);
}
