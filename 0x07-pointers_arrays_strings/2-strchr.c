#include "main.h"
#include <stdio.h>

/**
 *  _strchr - find a character in string
 *  @s: char array
 *  @c: char to find
 *  Return: Pointer to memory area
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		s++;
		if (*s == c)
			return (s);

		else if (*(s + 1) == c)
			return (s + 1);
	}
	return (s + 1);
}
