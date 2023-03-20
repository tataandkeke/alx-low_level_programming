#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks wether it is digit
 * @c: input
 * Return: return 1 if digit, return 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (0);
	}
	else if (c >= 97 && c <= 122)
	{
		return (0);
	}
	else if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
