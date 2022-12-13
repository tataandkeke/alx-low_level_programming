#include <unistd.h>
#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * descriptions : prints all the lower case character
 * @n: n return the number
 * Return: + when more than zero, 0 when zero, - when negative
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
