#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function to allocate memory to an array
 * @nmemb: number of the elements.
 * @size: The size 
 *
 * Return: NULL If function faillure, nmemb = 0, size = 0,
 *         f success returns a pointer to the new allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str;
	char *string;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return ('\0');
	}

	str = malloc(size * nmemb);

	if (str == NULL)
	{
		return ('\0');
	}

	string = str;
	i = 0;

	while (i < (size * nmemb))
	{
		string[i] = '\0';
		i++;
	}

	return (str);
}