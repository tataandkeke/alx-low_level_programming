#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * print_rev - print in reverse
 * @s: input pointer
 * Return:  return 0
 */

void print_rev(char *s)
{
	int a;
	int start;
	int end;

	for (a = 0; s[a] != '\0'; a++)
	{

	}

	end = a - 1;

	for (start = 0; start < a; start++)
	{
		s[start] = s[end];
		end--;
	}

	s[start] = '\0';
	printf("%s\n". s);
}
