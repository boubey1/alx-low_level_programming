#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: the number of time \ is printed
 */
void print_diagonal(int n)
{
	int diag;
	int space;

	if (n > 0)
	{
		for (diag = 0; diag <= n; diag++)
		{
			for (space = 1; space <= diag; diag++)
			{
				_putchar(' ');
			}

			_putchar('\\');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
