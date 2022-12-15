#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: tirangle size
 */

void print_triangle(int size)
{
	int a;
	int b;
	int i;
	int c;
	int d;

	a = 0;

	b = size;

	for (i = 0; i < size; i++)
	{
		a = a + 1;
		b = b - 1;

		for (c = b; c > 0; c--)
		{
			_putchar(' ');
		}

		for (d = 0; d < a; d++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
