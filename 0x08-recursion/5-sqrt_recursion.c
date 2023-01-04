#include "main.h"

/**
 * _sqrt_recursion - print a string
 * @n: number
 * Return: return sqare root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _squareroot - function to square root
 * @c: value
 * @i: increment
 * Return: return root
 */

int _squareroot(int c, int i)
{
	int square;

	square = i * i;
	if (square == c)
		return (i);
	else if (square < c)
		return (_squareroot(c, i + 1));
	else
		return (-1);
}
