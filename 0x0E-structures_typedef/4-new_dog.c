#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog -  a function that creates a new dog.
 *
 * @name: Name of the new dog
 *
 * @age: how old is the new dog
 *
 * @owner: who owns the new dog
 *
 * Return: return NULL if function falls
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int a, b, c;
	dog_t *doge;

	a = 0;
	b = 0;

	while (name[a] != '\0')
		a++;
	while (owner[b] != '\0')
		b++;
	doge = malloc(sizeof(dog_t));
	if (doge == NULL)
	{
		free(doge);
		return (NULL);
	}
	doge->name = malloc(a * sizeof(doge->name));
	if (doge->name == NULL)
	{
		free(doge->name);
		free(doge);
		return (NULL);
	}
	for (c = 0; c <= a; c++)
		doge->name[c] = name[c];
	doge->age = age;
	doge->owner = malloc(b * sizeof(doge->owner));
	if (doge->owner == NULL)
	{
		free(doge->owner);
		free(doge->name);
		free(doge);
		return (NULL);
	}
	for (c = 0; c <= b; c++)
		doge->owner[c] = owner[c];
	return (doge);
}
