#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: An input integer at number of columns
 * @height: An input integer at number of rows
 * Return: pointer to 2D array, NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **array, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(array + i) = malloc(sizeof(int) * width);
		if (*(array + i) == NULL)
		{
			int k = 0;

			for (k = 0; k < i; k++)
				free(*(array + k));
			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			*(*(array + i) + j) = 0;
	return (array);
}
