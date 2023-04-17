#include "dog.h"
#include <stdio.h>
/**
 * init_dog - a function that initialize a variable of type struct dog
 *
 * @d: type of dog
 *
 * @name: name of the dog
 *
 * @age: age of the dog
 *
 * @owner: person that ownes the dog, my hooman
 *
 * Return: pointer to dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	while (!d)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
