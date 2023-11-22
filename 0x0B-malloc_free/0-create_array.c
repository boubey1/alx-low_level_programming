#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - a function that creates arrays with chars with
 *                initialition with a name of an indicated char
 * @size: first parameter that gives the size of the array
 * @c: second parameter that gives the name to intialize the array
 *
 * Return: NULL If size == 0 or the function fails
 *         Otherwise - a pointer to the array created.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *arr_name;

	if (size == 0)
		return (NULL);

	arr_name = malloc(sizeof(char) * size);

	if (arr_name == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		arr_name[j] = c;

	return (arr_name);

}
