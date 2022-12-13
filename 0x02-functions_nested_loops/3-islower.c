#include <unistd.h>
#include "main.h"

/**
 * _islower - checks lower case
 * descriptions : prints all the lower case character
 * @c: c return the number
 * Return: 1 when lower, 0 when not lower
 */
int _islower(int c)
{
	if (c > 64 && c < 91)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
