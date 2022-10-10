#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
 * init_dog - initialize a dog
 *
 * @d: pointer for a new dog
 *
 * @name: name of new dog
 *
 * @age: age of new dog
 *
 * @owner: owner of new dog
 *
 * Description: Initialize variable for new dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
