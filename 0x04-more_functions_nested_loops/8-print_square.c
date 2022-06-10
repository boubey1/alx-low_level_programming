#include "main.h"

/**
 * print_square - prints a squre
 * @size: the size of the square
 */
void print_square(int size)
{
	int number;
	int space;

	if (size > 0)
	{
		for (number = 0; number < size; number++)
		{
			for (space = 0; space < size; space++)
				_putchar('#');
			if (space == size - 1)
				continue;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
