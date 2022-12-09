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
	char x = '0';

	for (; x <= '9'; x++)
	{
		putchar(x);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
