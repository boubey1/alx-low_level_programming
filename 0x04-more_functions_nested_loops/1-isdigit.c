#include "main.h"

/**
 * _isdigit - checks if the variable is a digit
 * @c: the variable to be checked
 * Return: 1 if a digit and 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
