#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_double_pointer - Function for free pointers
 * @ptr: double pointer
 * @size: size
 * Return: Nothing
 */

void free_double_pointer(void **ptr, int size)
{
	while (size >= 0)
	{
		free(ptr[size]);
		size--;
	}
	free(ptr);
}

/**
 * **alloc_grid - function that returns a pointer to a 2 dimensional
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */

int **alloc_grid(int width, int height)
{
	int h, w;
	int **matrix = NULL;

	if (height <= 0 || width <= 0)

	{
		return (NULL);
	}

	else
	{
		matrix = malloc(sizeof(int *) * height);

		if (!matrix)
		{
			return (NULL);
		}

		for (h = 0; h < height; h++)
		{
			matrix[h] = malloc(sizeof(int) * width);
			if (matrix[h] == 0)
			{
				free_double_pointer((void **)matrix, h);
				return (NULL);
			}
			for (w = 0; w < width; w++)
			{
				matrix[h][w] = 0;
			}
		}
		return (matrix);
	}
	return (NULL);
}
