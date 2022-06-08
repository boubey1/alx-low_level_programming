#include "main.h"

/**
 * _isalpha - check if the entry ia letter 
 * @c: will be tested if a letter (lowercase or uppercase)
 * Return: if a lowercase 1 ifnot 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
