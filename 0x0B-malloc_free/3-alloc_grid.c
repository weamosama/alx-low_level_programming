#include <stdlib.h>

/**
 *alloc_grid - Allocate memory for a 2D array of integers and initialize to 0.
 *@width: The width (number of columns) of the grid.
 *@height: The height (number of rows) of 
 *
 *Return: A pointer 
 */
int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	int **grid = (int **) malloc(height* sizeof(int*));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (int i = 0; i < height; i++)
	{
		grid[i] = (int*) malloc(width* sizeof(int));

		if (grid[i] == NULL)
		{
			for (int j = 0; j < i; j++)
			{
				free(grid[j]);
			}

			free(grid);
			return NULL;
		}

		for (int j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
