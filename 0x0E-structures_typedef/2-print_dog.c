#include "dog.h"
#include <stdio.h>
/**
 * print_dog - a function that prints a struct dog
 *
 * @d: is struct dog
 */
void print_dog(struct dog *d)
{
	while (d)
	{
		while (!(d->name))
			printf("Name: (nil)\n");
		do
			printf("Name: %s\n", d->name);

		while (printf("Age: %f\n", d->age));

		while (!(d->owner))
			printf("Owner: (nil)\n");
		do
			printf("Owner: %s\n", d->owner);
	}
}
