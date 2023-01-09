#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - combines two strings together
 * @s1: first string
 * @s2: second string
 * Return: Return NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;

	int str_len1 = strlen(s1);
	int str_len2 = strlen(s2);
	int total_len = str_len1 + str_len2;

	char *newstring = (char *)malloc(sizeof(char) * total_len + 1);

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}


	if (newstring == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < str_len1; i++)
	{
		newstring[i] = s1[i];
	}

	for (j = 0; j < str_len2; j++)
	{
		newstring[i] = s2[j];
		i++;
	}
	return (newstring);
}
