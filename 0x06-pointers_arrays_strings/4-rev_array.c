#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array - join two string together
 * @a: input
 * @n: input
 * Return: returns a pointer
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < (n / 2); x++)
	{
		y = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = y;
	}

}
