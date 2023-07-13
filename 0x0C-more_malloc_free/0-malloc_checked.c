#include "main.h"
/**
 * malloc_checked - malloc check
 * @b: memory that is allocated
 * root-codes
 * Return: pointer to allocated menory
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (1);
}
