#include "variadic_functions.h"
/**
 * sum_them_all - gives the sum of the paramters
 * @n: number of paramters
 * @...: Additional paramters
 *
 * Return: returns 0 if n == 0
 *         if not returns the sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nb;
	unsigned int i = 0, sum = 0;

	va_start(nb, n);

	while (i < n)
	{
		sum += va_arg(nb, int);
		i++;
	}

	va_end(nb);

	return (sum);
}
