#include<stdio.h>
#include<string.h>
#include<time.h>

/**
*main - program starts
*Description: prints all single digits from 0-9
*Return: 0 all the time
*/

int main(void)
{
	int x = '0';

	for (; x <= '9'; x++)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);
}
