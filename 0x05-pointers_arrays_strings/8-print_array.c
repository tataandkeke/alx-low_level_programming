#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * print_array - reset the value a pointer is refereing too
 * @a: input pointer
 * @n: inpt number
 * Return:  return 0
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; a[b] <= n; b++)
	{
		printf("%d, ", a[b]);
	}
}
