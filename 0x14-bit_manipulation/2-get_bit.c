#include "main.h"

/**
 * get_bit -  a function that returns the value of a bit at a given index
 * @n: bit given as parameter
 * @index: index of the value
 *
 * Return: If error returns -1, if success the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size;

	size = sizeof(unsigned long int) * 8;

	if (index >= size)
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	else
		return (1);

}

