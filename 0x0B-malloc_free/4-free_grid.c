#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function
 * @grid: input
 * @height: input
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	int y;

	if (grid == NULL || grid == 0)
	{
		return;
	}
	for (y = 0; y < height;  y++)
	{
		free(grid[y]);
	}
	free(grid);
}
