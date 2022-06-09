#include "main.h"

/**
 * _isupper - it checks if the letter is uppercase
 * @c: the variable to be checked
 * Return: returns the value of c (0 ou 1)
 */
int _isupper(int c)
{
	int c;

	if (c >= 'A' && c <= 'Z')
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
	return (c);
}
