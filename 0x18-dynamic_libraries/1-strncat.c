#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strncat - join two string together
 * @dest: input
 * @src: input
 * @n: input
 * Return: returns a pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
	{
		;
	}

	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}

	dest[a] = '\0';
	return (dest);
}
