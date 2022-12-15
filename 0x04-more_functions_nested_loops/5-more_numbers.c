#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints numbers
 * Return: return 1 if upper case, return 0 otherwise
 */

void more_numbers(void)
{
	int a;
	int b;

	a = 0;

	while (a < 10)
	{
		b = 0;
		while (b < 15)
		{
			if (b > 9)
				_putchar(1 + '0');

			_putchar(b % 10 + '0');
			b++;
		}
		a++;
		_putchar('\n');
	}
}
