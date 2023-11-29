#include "function_pointers.h"

/**
 * int_index - look for an specific integer in an array
 * @array: an array of integers
 * @size: size of the array to be checked
 * @cmp: pointer to the function that check the array
 *
 * Return: If the array size is 0 or no element matches, returns -1
 * if successful, returns the index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	while (index < size)
	{
		if (cmp(array[index]) != 0)
		{
			return (index);
		}
			index++;
	}

	return (-1);
}
