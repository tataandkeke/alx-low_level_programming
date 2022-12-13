#include <unistd.h>
#include "main.h"

/**
 * times_table - print 9 times table
 * Descriptions : prints all the lower case character
 * n: n return the number
 * Return: + when more than zero, 0 when zero, - when negative
 */
void times_table(void)
{
	int row = 0;
	int collum;
	int number;

	while (row < 10)
	{
		collum = 0;

		while (collum < 10)
		{
			number = row * collum;

			if (number > 9)
			{
				_putchar(number / 10 + '0');
				_putchar(number % 10 + '0');
			}
			else if (collum != 0)
			{
				_putchar(' ');
				_putchar(number + '0');
			}
			else
			{
				_putchar(number + '0');
			}
			if (collum != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			collum++;
		}

		_putchar('\n');
		row++;
	}
}
