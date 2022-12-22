#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * cap_string - join two string together
 * @s: input
 * Return: returns a pointer
 */

char *cap_string(char *s)
{
	int a;
	int b;

	char *sc = ",;.!?(){}\n\t\" ";

	for (a = 0; *(s + a) != '\0'; a++)
	{
		if (a == 0 && *(s + a) >= 'a' && *(s + a) <= 'z')
			s[a] -= 32;

		for (b = 0; b < 13; b++)
		{
			if (s[a] == sc[b])
			{
				if (s[a + 1] >= 'a' && s[a + 1] <= 'z')
				{
					s[a + 1] -= 32;
				}
			}
		}
	}
	
	return (s);
}
