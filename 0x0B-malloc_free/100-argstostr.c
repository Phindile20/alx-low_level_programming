#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program
 *
 * @ac: argument
 * @av: pointer to a string
 *
 * Return: address of the newly allocated memory
 */

char *argstostr(int ac, char **av)
{
	int a, b, c;
	int sum;
	char *concat;

	sum = 0;

	while (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			sum++;
		sum++;
	}
	sum++;

	concat = malloc(sum * sizeof(char));
	if (concat == NULL)
	{
		free(concat);
		return (NULL);
	}

	c = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++, c++)
		{
			concat[c] = av[a][b];
		}
		concat[c] = '\n';
		c++;
	}
	return (concat);
}
