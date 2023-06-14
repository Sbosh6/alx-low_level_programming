#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - realeses 2d array memory
 * @grid: 2d arrray grid
 * @height: is the height of the grid
 * Return: returns nothing
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);

	}

	free(grid);
}

