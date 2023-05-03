#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 *
 * @s1: string one
 *
 * @s2: string two
 *
 * Return: pointer to a string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, a, b;

	a = 0;
	b = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	while (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] || s2[i]; i++)
		a++;

	concat = malloc(sizeof(char) * a);

	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
		concat[b++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat[b++] = s2[i];

	return (concat);
}
