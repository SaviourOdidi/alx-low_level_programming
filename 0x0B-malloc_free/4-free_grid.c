#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Afunction that frees a 2D array of ints previously
 * created by your malloc_grid function
 * @grid: An input 2D array of ints to free
 * @height: height of grid
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
