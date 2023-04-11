#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars, with a specific char
 *
 * @size: size of array
 *
 * @c: char
 * Return:pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ca;

	if (size == 0)
		return (NULL); /*fail */
	ca = malloc(size * sizeof(char));

	if (ca == NULL)
		return (NULL); /*fail*/

	for (i = 0; i < size; i++)
	{
		ca[i] = c;
	}
	return (0); /*pass*/
}
