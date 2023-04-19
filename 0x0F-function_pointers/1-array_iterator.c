#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - a function that executes a function given as
 * a parameter on each element of an array
 *
 * @array: array to interate
 *
 * @size: is the size of the array
 *
 * @action: is a pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	while (!array || !size || !action)
	{
		return;
	}

	while (size--)
		action(*array++);
}
