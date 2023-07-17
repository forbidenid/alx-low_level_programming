#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - struct
 * @d: struct
 * root-codes
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %\n", d->name ? d->name : "(nill)");
	printf("Age: %.2f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nill)");
}
