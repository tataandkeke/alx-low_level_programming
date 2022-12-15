#include "main.h"
#include <stdio.h>

/**
 * print_line - prints numbers
 * @n: input
 * Return: return 1 if upper case, return 0 otherwise
 */

void print_line(int n)
{
	int i;

	if (n == 0 || n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('\n');
		}
	}
}
