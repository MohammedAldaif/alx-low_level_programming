#include "main.h"

/**
 * alloc_grid - Allocates a 2D grid of
 * integers with specified width and height.
 * @width: The width of the grid.
 * @height: The height of the grid.
 * Return: A pointer to the allocated 2D grid of integers,
 * or NULL if memory allocation fails.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **one_dim_arr_ptr;

	one_dim_arr_ptr = malloc(sizeof(int *) * height);
	if (one_dim_arr_ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		one_dim_arr_ptr[i] = malloc(sizeof(int) * width);
		if (one_dim_arr_ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(one_dim_arr_ptr[j]);
			}
			free(one_dim_arr_ptr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			one_dim_arr_ptr[i][j] = 0;
		}
	}

	return (one_dim_arr_ptr);
}

