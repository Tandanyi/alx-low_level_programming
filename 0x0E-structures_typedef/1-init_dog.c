#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialites var of struct dog
 * @d : pointer to dog
 * @name : name of dog
 * @age : age of dog
 * @owner : owner
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
