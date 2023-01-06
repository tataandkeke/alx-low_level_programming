#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>

/**
 * main - add positive numbers
 * @argc: number of arguments passed
 * @argv: array of strings
 * Return: returns
 */

int main(int argc, char *argv[])
{
	int i;
	int addsum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < 47 || *argv[i] > 57)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				addsum += atoi(argv[i]);
			}
		}

		printf("%d\n", addsum);
	}
	return (0);
}
