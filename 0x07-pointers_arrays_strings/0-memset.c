#include "main.h"

/**
 *  _memset - pt a constant byte in the memory
 *  @s: buffer array
 *  @b: constant byte
 *  @n: number of bytes to fill
 *  Return: Pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}

	return (s);
}
