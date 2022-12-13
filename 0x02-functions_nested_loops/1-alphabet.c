#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - prints all in lower case
 * descriptions : prints all the lower case character
 * Return: 0 when succesful
 */

void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
