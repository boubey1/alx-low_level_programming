#include "main.h"

/**
 * _pow_recursion - a function to give the value of x raised to the power of y.
 * @x: first value to be treated 
 * @y: second value to express the power.
 *
 * Return: pwr 
 */

int _pow_recursion(int x, int y)
{
	int pwr = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	pwr *= _pow_recursion(x, y - 1);

	return (pwr);
}

