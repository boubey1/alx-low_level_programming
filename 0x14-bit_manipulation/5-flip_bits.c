#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need
 * to flip to get from one number to another
 * @n: array of number
 * @m: the flipped numbers
 *
 * Return: num
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned long int num = 0;

	if (result)
	{
		for (; result; result >>= 1)
		{
			num += (result & 1);
		}
	}

	return (num);
}
