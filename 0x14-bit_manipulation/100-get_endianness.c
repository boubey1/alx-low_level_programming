#include "main.h"

/**
 * get_endianness -  a function that checks the endianness
 *
 * Return: 0
 */
int get_endianness(void)
{
	int nb = 1;
	char *ptr_head = (char *)&nb;

	for (; *ptr_head == 1; ptr_head++)
		return (1);

	return (0);
}
