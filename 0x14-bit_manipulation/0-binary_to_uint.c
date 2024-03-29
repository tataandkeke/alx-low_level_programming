#include "main.h"

/**
 * binary_to_uint - convert binary to unit
 * @b: string
 * Return: result
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, pow;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (pow = 1, sum = 0, i--; i >= 0; i--, pow *= 2)
	{
		if (b[i] == '1')
			sum += pow;
	}

	return (sum);
}
