#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked- function to allocate memory using malloc
 * @b: paramter to allocate the memory for
 * Return: 98 if the allocation fails
 *         the pointer to the memory if succeful
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(sizeof(unsigned int));

	if (ptr == NULL)
	{
		*ptr = 98;
		return (ptr);
	}
	else
	{
		*ptr = b;
		return (ptr);
	}
}
