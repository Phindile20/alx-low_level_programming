#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - a function that returns a pointer to a
 * 2 dimensional array of integers
 *
 * @width: the distance between colunms in array
 *
 * @height: how tall is the array
 *
 * Return: NULL on failure
 * If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int a, c;
	int **b;

	a = 0;
	c = 0;

	while (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	b = (int **)malloc(sizeof(int *) * height);
	if (b == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		b[a] = (int *)malloc(sizeof(int) * width);
		if (b[a] == NULL)
		{
			for (c = 0; c < a; c++)
				free(b[c]);
			free(b);
			return (NULL);
		}
		for (c = 0; c < width; c++)
		{
			b[a][c] = 0;
		}
	}
	return (b);
}
