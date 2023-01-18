#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - adding function
 * @a: first number
 * @b: second number
 * Return: returns int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sbtraacting numbers
 * @a: first number
 * @b: second number
 * Return: returns int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply function
 * @a: first number
 * @b: second number
 * Return: retunrs int
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - dividing function
 * @a: first number
 * @b: second number
 * Return: returns int
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus function
 * @a: first number
 * @b: second number
 * Return: returns int
 */

int op_mod(int a, int b)
{
	return (a % b);
}
