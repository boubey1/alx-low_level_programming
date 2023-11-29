#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: the parameter(name) to print
 * @f: this parameter is a pointer to a function which prints names
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);

}