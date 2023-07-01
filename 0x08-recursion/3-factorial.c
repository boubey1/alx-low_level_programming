#include "main.h"

/**
 * factorial - a function to give the factorial of a number
 * @n: number to express the the factorial value
 *
 * Return: fact
 */

int factorial(int n)
{
	int fact = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	fact *= factorial(n - 1);

	return (fact);
}

