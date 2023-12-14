#include "main.h"

/**
 * binary_to_uint - a function that returns the sum of all its parameters
 * @b: pointer to parameter which contains 0 and 1
 *
 * Return: ) if NULL - if not returns the number converted
 */
unsigned int binary_to_uint(const char *b)
{
	int size = 0;
	unsigned int n = 0, factor = 1;


	if (b == NULL)
	{
		return (0);
	}

	while (b[size])
	{
		size++;
	}

	size = size - 1;

	while (size >= 0)
	{
		if (b[size] != '0' && b[size] != '1')
			return (0);

		n += (b[size] - '0') * factor;
		factor *= 2;

		size--;
	}

	return (n);
}
