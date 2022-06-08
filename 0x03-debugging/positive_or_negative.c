#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negative - function that run the code
 * @i: parameter to be tested
 * Return: the value is 0
 */

void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (i > 0)
	{
		printf("%d", i);
		printf(" is positive\n");
	}
	else if (i == 0)
	{
		printf("%d", i);
		printf(" is zero\n");
	}
	else
	{
		printf("%d", i);
		printf(" is negative\n");
	}
}
