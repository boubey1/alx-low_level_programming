#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - function to return the pointer of 2 arrays
 * @width: first array to return the pointer
 * @height: second dimension pointer to return the pointer
 * Desc: return the pointers to 2 dimentional array
 * Return: return the pointer
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
    {
        return (NULL);
    }


	array = malloc(sizeof(int *) * height);

	if (array == NULL)
    {
		return (NULL);
    }

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);

		if (array[i] == NULL)
		{
			while (i >= 0)
            {
				free (array[i]);
                i--;
            }

			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
        {
			array[i][j] = 0;
        }
	}

	return (array);
}
