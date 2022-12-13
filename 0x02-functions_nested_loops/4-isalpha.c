#include <unistd.h>
#include "main.h"

/**
 * _isalpha - checks alphabet
 * descriptions : prints all the lower case character
 * @c: c return the number
 * Return: 1 when lower, 0 when not lower
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
