#include "main.h"

/**
 * is_prime_number - print aa prime
 * @n: number
 * Return: return
 */

int is_prime_number(int n)
{
	return (_is_prime(n, n / 2));
}

/**
 * _is_prime - check for prime
 * @num: number check
 * @i: vale
 * Return: prime check
 */

int _is_prime(int num, int i)
{
	if (i == 1)
	{
		return (1);
	}

	else
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (_is_prime(num, i - 1));
		}
	}
}
