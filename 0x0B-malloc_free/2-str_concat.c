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
	int t;

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

	for (i = 0; s1[i] != '\0'; i++)
	{

	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		s1[i] = s2[j];
		i++;
	}
	
	for (t = 0; t < total_len; t++)
	{
		newstring[t] = s1[t];
	}

	return (newstring);
}
