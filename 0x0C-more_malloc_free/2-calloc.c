#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc -  function that allocates memory for an array, using malloc
 *
 * @nmemb: memory for an array
 *
 * @size: bytes size of array
 *
 * Return: poiner to the address of the memory block
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ray;
	unsigned int i;

	while (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ray = malloc(nmemb * size);

	if (ray != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			ray[i] = 0;
		return (ray);
	}
	else
	{
		return (NULL);
	}
}
