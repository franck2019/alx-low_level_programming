#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional
 * array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: a 2 dimensional array of integers, otherwise NULL.
 */
int **alloc_grid(int width, int height)
{
	int **myGrid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	myGrid = (int **) malloc(height * sizeof(int *));
	if (myGrid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		myGrid[i] = (int *) malloc(width * sizeof(int));
		if (myGrid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(myGrid[j]);
			free(myGrid);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			myGrid[i][j] = 0;
	return (myGrid);
}
