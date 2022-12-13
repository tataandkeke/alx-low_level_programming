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
	if (c > 97 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
