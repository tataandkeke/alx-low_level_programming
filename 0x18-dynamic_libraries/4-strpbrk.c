#include "main.h"

/**
 *  _strpbrk - search a string for a set of byte
 *  @s: string
 *  @accept:string matching
 *  Return: return
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;
	char *p;

	a = 0;

	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				p = &s[a];
				return (p);
			}
			b++;
		}
		a++;
	}

	return (0);
}
