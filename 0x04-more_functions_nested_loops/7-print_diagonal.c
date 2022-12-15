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

	a = 0;
	
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
	if (b < 1)
		_putchar('\n');
}
