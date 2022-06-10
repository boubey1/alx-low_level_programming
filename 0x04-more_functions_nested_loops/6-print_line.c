#include "main.h"

/**
 * print_line - print a line
 * @n: n times _ is printed
 *Return: no
 */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 1; line <= n; line++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
