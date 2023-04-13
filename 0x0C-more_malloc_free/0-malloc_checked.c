#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked -  allocates memory using malloc
 *
 * @b: memory
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *m;

	m = malloc_checked(b);
	if (m == NULL)
	{
		exit(98);
	}
	return (m);
}
