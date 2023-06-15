#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 *
 * @min: minimal value of array
 *
 * @max: maximum value of array
 *
 * Return: pointer to the address of the memory block
 */
int *array_range(int min, int max)
{
	int *range;
	int i, a = 0;

	while (min > max)
	{
		return (NULL);
	}
	range = malloc(sizeof(*range) * ((max - min) + 1));
	if (range != NULL)
	{
		for (i = min; i <= max; i++)
		{
			range[a] = i;
			a++;
		}
		return (range);
	}
	else
	{
		return (NULL);
	}

}
