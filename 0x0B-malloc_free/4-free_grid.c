#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid 
 * @ptr: double pointer
 * @size: size
 * Return: Nothing
 */

void free_grid(int **grid, int height)	
{
	int index = 0;
	
	while (index < height)		
	{
		free(grid[index]);	
		index++;
	}
	free(grid);
}
