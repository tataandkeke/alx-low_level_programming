#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - printting the first argument
 * @argc: number of arguments passed
 * @argv: array of strings
 * Return: returns
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
