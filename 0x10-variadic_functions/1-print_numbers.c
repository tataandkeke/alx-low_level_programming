#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints a set of numbers with
 * @separator: character that separates the numbers printed
 * @n: number of arguemnts passed
 * Return: return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			printf("%d%s", va_arg(list, int), separator);
		}
		else
		{
			printf("%d", va_arg(list, int));
		}
	}

	printf("\n");

	va_end(list);
}
