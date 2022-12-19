#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * swap_int - swaps the values of 2 integers a and b
 * @a: input pointer
 * @b: input number
 * return:  return 0
 */

void swap_int(int *a, int *b)
{
	int cp_a = *a;
	int cp_b = *b;

	*a = cp_b;
	*b = cp_a;
}
