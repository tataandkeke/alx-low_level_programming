#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - printting all the arguments
 * @argc: number of arguments passed
 * @argv: array of strings
 * Return: returns
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
