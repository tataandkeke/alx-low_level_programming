#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * string_toupper - join two string together
 * @input: input
 * Return: returns a pointer
 */

char *string_toupper(char *input)
{
	int a;

	for (a = 0; input[a] != '\0'; a++)
	{
		if (input[a] > 96 && input[a] < 123)
			input[a] -= 32;
	}

	return (input);
}
