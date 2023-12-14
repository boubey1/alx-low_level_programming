#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: pointer n
 * @index: index of n starting at 0
 *
 * Return: error, returns -1
 *         Success returns 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size;

	size = sizeof(unsigned long int) * 8;


	*n &= ~(1 << index);

	if (index >= size)
		return (-1);



	return (1);
}
