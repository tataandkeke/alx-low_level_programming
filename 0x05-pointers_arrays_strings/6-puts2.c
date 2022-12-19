#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * _puts2 - reset the value a pointer is refereing too
 * @str: input pointer
 * Return:  return 0
 */

void _puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}

	_putchar('\n');
}
