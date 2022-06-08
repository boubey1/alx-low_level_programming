#include "main.h"

/**
 * print_sign - Lock for the sign and prints it
 * @n: will be tested
 * Return: if + 1, if - -1 and 0 if null
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('0');
		return (-1);
	}
	else
	{
		return (0);
	}
}
