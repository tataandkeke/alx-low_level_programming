#include <unistd.h>
#include "main.h"

/**
 * _abs - checks absolte value
 * descriptions : prints all the lower case character
 * @n: n return the number
 * Return: + when more than zero, 0 when zero, - when negative
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n * -1);
	}
}
