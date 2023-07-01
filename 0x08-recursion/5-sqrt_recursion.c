#include "main.h"


/**
 * square_of_nb - a function to determine the square root
 * @nb: The initial number to look for the square root
 * @init_root: The root 
 *
 * Return: the value of the root, if not -1
 */
int square_of_nb(int nb, int init_root)
{
	if ((init_root * init_root) == nb)
		return (init_root);

	if (init_root == nb / 2)
		return (-1);

	return (square_of_nb(nb, init_root + 1));
}

/**
 * _sqrt_recursion - gives the value of square root of a given number
 * @n: The initial number to look for the square root
 *
 * Return: the value of the root, if not -1
 */
int _sqrt_recursion(int n)
{
	int init_root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (square_of_nb(n, init_root));
}

