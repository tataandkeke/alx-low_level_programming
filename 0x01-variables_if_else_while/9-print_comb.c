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
	int x = '0';

	for (; x <= '9'; x++)
	{
		if (x == '9')
		{
			putchar(x);
		}
		else
		{
			putchar(x);
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
