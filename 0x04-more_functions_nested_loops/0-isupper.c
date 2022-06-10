#include "main.h"

/**
 * _isupper - it checks if the letter is uppercase
 * @c: the variable to be checked
 * Return: returns 0 ou 1
 */
int _isupper(int c)
{
	int c;

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
