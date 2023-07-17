#include "dog.h"

/**
 * init_dog - initialize variable
 * @d: struct
 * @name: name
 * @age: of the dog
 * @owner: of the dog
 */

void init_dog(struct dog *d, chsr *name, float *age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
