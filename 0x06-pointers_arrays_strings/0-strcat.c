#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strcat - join two string together
 * @dest: input
 * @src: input
 * Return: returns a pointer
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
	{
		;
	}

	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[j];
		a++;
	}

	dest[a] = '\0';
	return (dest);
}
