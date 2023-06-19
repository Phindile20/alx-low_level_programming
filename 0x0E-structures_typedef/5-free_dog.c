#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - a function that frees dogs.
 *
 * @d: the struct dog
 */
void free_dog(dog_t *d)
{
	while (!d)
	{
		return;
		free(d->name);
		free(d->owner);
		free(d);
	}
}
