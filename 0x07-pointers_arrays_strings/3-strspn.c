#include "main.h"

/**
 *  _strspn - search a string for a set of byte
 *  @s: char string array
 *  @accept: char array to check byte with
 *  Return: return
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b, c;

	a = 0;
	b = 0;

	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				c++;
				break;
			}
			b++;
		}
		if (accept[b] == '\0')
			break;
		a++;
	}

	return (c);
}
