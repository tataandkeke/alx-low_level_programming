#include <unistd.h>
#include "main.h"

/**
 * print_sign - checks alphabet
 * descriptions : prints all the lower case character
 * @n: n return the number
 * Return: + when more than zero, 0 when zero, - when negative
 */
int print_sign(int n)
{
	if (n > 48 && n < 58)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
