#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - printting the number of arguments pased
 * @argc: number of arguments passed
 * @argv: array of strings
 * Return: returns
 */

int main(int argc, char *argv[])
{
	(void) argv;

	if (argc > 1)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		printf("%d\n", 0);
	}

	return (0);
}
