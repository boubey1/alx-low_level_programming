#include "main.h"

/**
 * _islower - check if the entry is lowercase
 *
 * Return: if a lowercase 1 ifnot 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
