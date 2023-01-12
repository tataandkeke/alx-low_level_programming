#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/**
 * string_nconcat - concatenates 2 string together
 * @s1: first string
 * @s2: string to be attached to s1
 * @n: number of s2 to join to s1
 * Return: returns a pointer to allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int str_lens1 = strlen(s1);
	unsigned int str_lens2 = strlen(s2);
	unsigned int i, j;

	char *newString = (char *)malloc(sizeof(char) * n + 1);

	if (newString == NULL)
	{
		return (NULL);
	}

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; i < str_lens1; i++)
	{
		newString[i] = s1[i];
	}

	if (n >= str_lens2)
	{
		for (j = 0; j < str_lens2; j++)
		{
			newString[i] = s2[j];
			i++;
		}
		newString[i] = '\0';
	}
	else if (n < str_lens2)
	{
		for (j = 0; j < n; j++)
		{
			newString[i] = s2[j];
			i++;
		}
		newString[i] = '\0';
	}

	return (newString);
}
