#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function returns a pointer to the duplicated string
 *
 * str: duplicate of the string
 *
 * Returns: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *st;
	int i = 0, s = 1;

	if (str == 0)
	{
		return (NULL);
	}

	while (str[i])
	{
		i++;
	}

	st = malloc(sizeof(char) * (i + 1));

	if (st == NULL)
		return (NULL);

	if (st = i)
	{
		st[i] = str[s];
		s++;
	}

	st[s] = '\0';
	return (st);
}
