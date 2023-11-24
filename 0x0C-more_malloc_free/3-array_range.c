#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers by ordering them
 * @min: is first value of the array
 * @max: is last value of the array
 *
 * Return: NuLL If min > max, function faillure
 *         if success - returns a pointer to the new array
 */
int *array_range(int min, int max)
{
	int *tab;
	int i = 0;
	int len = 0;
	len = max - min + 1;

	if (min > max)
		return ('\0');

	tab = malloc(sizeof(int) * len);

	if (tab == NULL)
	{
		return ('\0');
	}

	while (i < len)
	{
		tab[i] = min++;
		i++;
	}

	return (tab);
}
