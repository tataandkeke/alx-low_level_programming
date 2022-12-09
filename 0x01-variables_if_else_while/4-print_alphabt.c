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
	char x = 'a';

	for (; x <= 'z'; x++)
	{
		if (x == 'e' || x == 'q')
		{

		}
		else
		{
		putchar(x);
		}
	}
	putchar('\n');

	return (0);
}
