#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strncpy - join two string together
 * @dest: input
 * @src: input
 * @n: input
 * Return: returns a pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}

	for (; a < n; a++)
	{
		dest[a] = '\0';
	}

	return (dest);
}
