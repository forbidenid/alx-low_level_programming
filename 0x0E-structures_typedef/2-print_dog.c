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
	{
		return;
	}
	if (d->name == NULL)
		printf("Name: %\n", d->name ? d->name : "(nil)");
	if (d-owner ==NULL)
		printf("Age: %.2f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
