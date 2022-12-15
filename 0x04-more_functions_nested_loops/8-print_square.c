#include "main.h"
#include <stdio.h>

/**
 * print_square - prints numbers
 * @size: input
 * Return: return 1 if upper case, return 0 otherwise
 */

void print_square(int size)
{
	int a;
	int b;

	b = 0;

	if (size < 1)
		_putchar('\n');

	while (b < size)
	{
		a = 0;

		while (a < size)
		{
			_putchar('#');
			a++;
		}
		_putchar('\n');
		b++;
	}
}
