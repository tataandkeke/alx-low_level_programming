#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * print_rev - print in reverse
 * @s: input pointer
 * Return:  return 0
 */

void print_rev(char *s)
{
	int a;
	int loop;

	for (a = 0; s[a] != '\0'; a++)
	{

	}

	loop = a;

	for (; loop >= 0; loop--)
	{
		printf("%c", s[loop]);
	}

	printf("\n");
}
