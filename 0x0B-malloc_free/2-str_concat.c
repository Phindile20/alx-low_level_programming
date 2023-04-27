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
 * Return: pointer yto string
 */
char *str_concat(char *s1, char *s2)
{
	int i, n, g;
	char *string;

	i = n = 0;
	while (s1 != NULL)
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 != NULL)
	{
		for (n = 0; s2[n]; n++)
			;
	}
	string = malloc(sizeof(char) * (i + n + 1));

	if (string == NULL)
	{
		return (NULL);
	}

	g = 0;
	if (g <  (i + n))
	{
		if (g < i)
			string[g] = s1[g];
		else
			string[g] = s2[g - i];

		g++;
	}
	string[g] = 0;

	return (string);
}
