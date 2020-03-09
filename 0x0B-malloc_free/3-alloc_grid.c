#include <stdio.h>
#include <stdlib.h>
/**
*alloc_grid - function that returns a pointer to a 2 dimensional array
*@width: rows of one a array
*@height: columns of one array
*Return: a pointer or NULL
*/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; ++i)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i)
				free(grid[--i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; ++j)
			grid[i][j] = 0;
	}
	return (grid);
}
