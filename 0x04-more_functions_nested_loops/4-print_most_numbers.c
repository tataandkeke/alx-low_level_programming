#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints numbers
 * Return: return 1 if upper case, return 0 otherwise
 */

void print_most_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		if (a == 50 || a == 52)
		{

		}
		else
		{
			_putchar(a);
		}
	}

	_putchar('\n');
}
