#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - malloc check
 * @b: memory that is allocated
 * payload
 * Return: pointer to allocated menory
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
