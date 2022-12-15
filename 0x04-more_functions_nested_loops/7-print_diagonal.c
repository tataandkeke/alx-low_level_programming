#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints numbers
 * @n: input
 * Return: return 1 if upper case, return 0 otherwise
 */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}

	while (n > 0)
	{
		a = b;
		while (a > 0)
		{
			_putchar(' ');
			a--;
		}
		_putchar('\\');
		_putchar('\n');
		b++;
		n--;

	}
}
