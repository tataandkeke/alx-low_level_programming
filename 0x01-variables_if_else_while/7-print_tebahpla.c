#include<stdio.h>
#include<string.h>
#include<time.h>

/**
 *main - program starts
 *Description: prints all the alphabets in lower case
 *Return: 0 all the time
 */
int main(void)
{
	char x = 'z';

	for (; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
