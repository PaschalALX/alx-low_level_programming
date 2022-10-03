#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocate memory for grid
 * @width: width of grid
 * @height: height of grid
 *
 * Return: int**
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (!grid)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(sizeof(int) * width);
		if (!grid[i])
		{
			for (j = 0; j < height; j++)
				free(grid[j]);
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
