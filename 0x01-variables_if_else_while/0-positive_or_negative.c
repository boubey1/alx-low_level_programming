#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - function that run the code
 * Description: these line will show the signe of n
 * Return: the value is 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d", n);
		printf(" is positive\n");
	}
	else if (n == 0)
	{
		printf("%d", n);
		printf(" is zero\n");
	}
	else
	{
		printf("%d", n);
		printf(" is negative\n");
	}
	return (0);
}
