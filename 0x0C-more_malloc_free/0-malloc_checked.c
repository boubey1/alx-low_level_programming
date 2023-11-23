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
	void *str = malloc(b);

	if (str == NULL)
		exit(98);
	return (str);

}
