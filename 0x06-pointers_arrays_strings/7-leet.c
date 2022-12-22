#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * leet- join two string together
 * @s: input
 * Return: returns a pointer
 */

char *leet(char *s)
{
	int a;
	int b;

	char *l = "aAeEoOtTlL";
	char *d = "4433007711";

	for (a = 0; *(s + a) != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (*(s + a) == *(l + b))
			{
				*(s + a) = *(d + b);
			}
		}
	}

	return (s);
}
