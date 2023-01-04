#include "main.h"

/**
 * factorial - print the factorial
 * @n: int
 * Return: return
 */

int factorial(int n)
{
	int fact = 0;

	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	fact = n * factorial(n - 1);

	return (fact);
}
