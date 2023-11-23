#include "main.h"
#include <stdlib.h>

/**
 * free_grid - use free to liberate a 2D array
 * @grid: is the 2D array to free
 * @height: is height
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}
