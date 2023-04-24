#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 *
 * @array: integer array
 *
 * @size: is the number of elements in the array
 *
 * @cmp: is a pointer to the function to be used to compare values
 *
 * Return: returns the index of the first element for which the
 * cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	while (!array || !cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			while (cmp(array[1]))
				return (i);
	}

	return (-1);
}