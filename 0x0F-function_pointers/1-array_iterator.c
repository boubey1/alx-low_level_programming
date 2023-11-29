#include "function_pointers.h"

/**
 * array_iterator - the function executes another function received as an
 *                  argument
 * @array: array.
 * @size: size of the array.
 * @action: pointer to the function to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
	{
		return;
	}



	for (i = size; i > 0; i--)
	{
		action(*array);
		array++;
	}
}

