#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function returns a pointer to the duplicated string
 *
 * str: duplicate of the string
 *
 * Return: returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 */
char *_strdup(char *str)
{
	char *dup;
	int i, a;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		a++;

	dup = malloc(sizeof(char) * (a + 1));

	while (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		dup[i] = str[i];
	}

	dup[a] = '\0';

	return (dup);

}
