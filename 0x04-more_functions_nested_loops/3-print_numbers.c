#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * Return: return 1 if upper case, return 0 otherwise
 */

void print_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		_putchar(a);
	}

	_putchar('\n');
}
