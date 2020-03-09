#include <stdio.h>
#include <stdlib.h>
/**
*free_grid - frees a 2 dimensional grid
*@grid: 2 dimensional array
*@height: height of an array
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
