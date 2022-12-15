#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * main - prints most numbers
 * Return: return 1 if upper case, return 0 otherwise
 */

int main(void)
{
	int a;

	for (a = 0; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", a);
		}
	}

	putchar('\n');

	return (0);
}
