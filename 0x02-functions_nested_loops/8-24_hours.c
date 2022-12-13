#include <unistd.h>
#include "main.h"

/**
 * jack_bauer - prints the entire day in munites
 * descriptions : prints all the lower case character
 * n return the number
 * Return: + when more than zero, 0 when zero, - when negative
 */
void jack_bauer(void)
{
	int hour1 = 0;
	int hour2 = 0;
	int min1 = 0;
	int min2 = 0;
	int lines = 1440;

	while (lines < 1440)
	{
		_putchar(hour1 + '0');
		_putchar(hour2 + '0');
		_putchar(':');
		_putchar(min1 + '0');
		_putchar(min2 + '0');
		_putchar('\n');

		min2++;

		if (min2 > 9)
		{
			min2 = 0;
			min1++;
		}

		if (min1 > 5)
		{
			min1 = 0;
			hour2++;
		}

		if (hour2 > 9)
		{
			hour2 = 0;
			hour1++;
		}

		lines++;
	}
}
