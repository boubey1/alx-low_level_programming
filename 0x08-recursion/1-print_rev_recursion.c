#include "main.h"

/**
 * _print_rev_recursion - funtion that prints in revrese a string
 * @s: string to print
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

