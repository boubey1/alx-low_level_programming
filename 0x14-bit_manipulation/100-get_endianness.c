#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big-endian - 0.
 *         If little-endian - 1.
 */
int get_endianness(void)
{
	int nb = 1;
	char *ptr_head = (char *)&nb;

	for (; *ptr_head == 1; ptr_head++)
		return (1);

	return (0);
}
