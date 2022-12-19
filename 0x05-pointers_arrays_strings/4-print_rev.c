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

	for (a = 0; s[a] != '\0'; a++)
	{

	}

	for (a--; a >= 0; a--)
	{
		_putchar(s[a]);
	}

	_putchar('\n');
}
