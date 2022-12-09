#include<stdio.h>
#include<string.h>
#include<time.h>

/**
 *main - program starts
 *Description: prints all the alphabets in lower and upper case
 *Return: 0 all the time
 */
int main(void)
{
	char x = 'a';
	char y = 'A';

	for (; x <= 'z'; x++)
	{
		putchar(x);
	}

	for (; y <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar('\n');

	return (0);
}
