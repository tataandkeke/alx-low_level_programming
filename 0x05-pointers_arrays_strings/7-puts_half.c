#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * puts_half - reset the value a pointer is refereing too
 * @str: input pointer
 * Return:  return 0
 */

void puts_half(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{

	}

	a++;

	for (a /= 2; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}
