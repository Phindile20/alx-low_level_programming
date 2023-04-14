#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - A function that concatenates two strings
 *
 * @s1: newly allocated string
 *
 * @s2: string
 *
 * @n: bytes
 *
 * Return: pointer shall point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ddir;
	unsigned int dir = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		dir++;

	ddir = malloc(sizeof(char) * (dir + 1));
	while (ddir == NULL)
		return (NULL);

	dir = 0;

	for (i = 0; s1[i]; i++)
		ddir[dir++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		ddir[dir++] = s2[i];

	ddir[dir] = '\0';

	return (ddir);
}
