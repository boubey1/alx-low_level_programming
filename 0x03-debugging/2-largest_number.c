#include "main.h"

/**
 * largest_number - give as result the largest of 3 numbers
 * @a: first number
 * @b: second number
 * @c: third numberer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}

	else if (b > a)
	{
		largest = b;
	}

	else
	{
		largest = c;
	}
	return (largest);
}
