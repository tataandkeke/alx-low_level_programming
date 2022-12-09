#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - program starts
*Description: prints wether number is negative or positive
*Return: 0 all the time
*/

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf(n" is positive\n");
	}
	else if (n < 0)
	{
		printf(n" is negative\n");
	}
	else
	{
		printf(n" is zero\n");
	}

	return (0);
}
