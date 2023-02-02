#include "main.h"

/**
 * get_bit - returns the value of bit in an index
 * @n: number
 * @index: index of bit
 * Return: result
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);

	val = (n >> index) & 1;

	return (val);
}
