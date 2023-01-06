#include "main.h"

/**
 *  _memcpy - pt a constant byte in the memory
 *  @dest: char to copy
 *  @src: source of copy
 *  @n: size
 *  Return: return value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
