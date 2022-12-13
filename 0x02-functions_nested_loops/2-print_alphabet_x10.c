#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints all in lower case
 * descriptions : prints all the lower case character
 * Return: 0 when succesful
 */

void print_alphabet_x10(void)
{
	int a = 1;

	while (a <= 10)
	{
		char x = 'a';

		while (x <= 'z')
		{
			_putchar(x);
			_putchar('\n');
			x++;
		}
		a++;
	}

}
