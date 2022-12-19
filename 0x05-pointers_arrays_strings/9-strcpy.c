#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * *_strcpy - reset the value a pointer is refereing too
 * @dest: input pointer
 * @src: input number
 * Return:  return 0
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}

	dest[a] = '\0';

	return (dest);
}
