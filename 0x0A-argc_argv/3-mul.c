#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiply 2 number from argc
 * @argc: number of arguments passed
 * @argv: array of strings
 * Return: returns
 */

int main(int argc, char *argv[])
{
	int mulsum;
	int num1;
	int num2;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		mulsum = num1 * num2;
		printf("%d\n", mulsum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
