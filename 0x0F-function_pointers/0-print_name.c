#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: the name variable
 * @f: function
 * Return: returns
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
