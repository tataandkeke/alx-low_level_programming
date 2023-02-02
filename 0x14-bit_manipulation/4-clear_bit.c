#include "main.h"

/**
 * clear_bit - set a bit value to 0
 * @n: number
 * @index: index of bit
 * Return: result
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);

	return (1);
}
