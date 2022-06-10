#include "main.h"

/**
 * print_square - prints a squre
 * @size: the size of the square
 */
void print_square(int size)
{
	int number;

	if (size > 0)
	{
		for (size = 1; size <= (number * number); size++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
