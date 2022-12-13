#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print from n to 98
 * descriptions : prints all the lower case character
 * @n: n return the number
 * Return: + when more than zero, 0 when zero, - when negative
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;

		}
	}
	printf("\n");
}
