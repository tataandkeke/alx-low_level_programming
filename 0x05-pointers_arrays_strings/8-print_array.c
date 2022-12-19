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

	for (n--; n >= 0; n--, b++)
	{
		printf("%d", a[b]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
