#include "main.h"
#include <stdlib.h>

/**
 *free_grid - Frees the memory allocated for a 2D grid.
 *@grid: A pointer to the 2D grid to be freed.
 *@height: The height (number of rows
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL)
	{
		for (int i = 0; i < height; i++)
		{
			free(grid[i]);
		}

		free(grid);
	}
}
