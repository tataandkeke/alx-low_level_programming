#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_function.h"

/**
 * sum_them_all - sums all the parameters
 * @n: number of parameters
 * Return: return
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;

	if (n == 0 || n == NULL)
		return (0);

	va_start(list, n);

	int i, sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}

	return (sum);
}
