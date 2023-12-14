#include "main.h"


/**
 * print_binary - a function that prints the binary representation of a number
 * @n: number to print in binary form
 */
void print_binary(unsigned long int n)
{
	unsigned long int a;

	if (n > 1)
	{
		a = n >> 1;

		print_binary(a);
	}



	_putchar((n & 1) + '0');
}
