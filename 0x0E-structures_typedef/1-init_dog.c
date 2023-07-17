#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize variable
 * @d: struct
 * @name: name
 * @age: of the dog
 * @owner: of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
