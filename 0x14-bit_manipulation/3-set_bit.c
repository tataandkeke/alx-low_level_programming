#include "main.h"

/**
 * set_bit - returns the value of bit in an index
 * @n: number
 * @index: index of bit
 * Return: result
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);

	return (1);
}
