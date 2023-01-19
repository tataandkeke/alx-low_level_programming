#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints all the argements
 * @separator: separates the strings
 * @n: number of parameters
 * Return: return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			if (va_arg(list, char*) != NULL)
			{
				printf("%s%s", va_arg(list, char*), separator);
			}
			else
			{
				printf("(nil)%s", separator);
			}
		}
		else
		{
			if (va_arg(list, char*) != NULL)
			{
				printf("%s", va_arg(list, char*));
			}
			else
			{
				printf("(nil)");
			}
		}
	}

	printf("\n");
}
