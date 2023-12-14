#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: pointer
 * @index: index
 *
 * Return: If error -1
 *         If not  1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	*n ^= (1 << index);

	return (1);
}
