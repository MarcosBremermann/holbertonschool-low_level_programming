#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function returning a pointer to 2 dimensional array of integers
 *
 * @width: defines width of the array
 *
 * @height: defines height of the array
 *
 * Return: either NULL or grid
 *
 */
int **alloc_grid(int width, int height)
{
	int **grid = malloc(height * sizeof(int));
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
