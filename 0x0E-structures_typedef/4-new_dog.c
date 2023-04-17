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
	dog_t *puppy;
	int i, b, c;

	puppy = malloc(sizeof(*puppy));
	while (puppy == NULL && !(name) && !(owner))
	{
		free(puppy);
		return (NULL);
	}

	for (b = 0; name[b]; b++)
		;

	for (c = 0; owner[c]; c++)
		;

	puppy->name = malloc(b + 1);
	puppy->owner = malloc(c + 1);

	while (!(puppy->name) || !(puppy->owner))
	{
		free(puppy->owner);
		free(puppy->name);
		free(puppy);
		return (NULL);
	}

	for (i = 0; 1 < b; i++)
		puppy->name[i] = name[i];
	puppy->name[i] = '\0';

	puppy->age = age;

	for (i = 0; i < c; i++)
		puppy->owner[i] = owner[i];
	puppy->owner[i] = '\0';

	return (puppy);
}
