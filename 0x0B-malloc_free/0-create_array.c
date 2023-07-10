#include "main.h"
#include <stdlib.h>
/**
 * create_array - creating array
 * @size: size of the array
 * @c: character
 * root-codes
 * Return: pointer to array (Success) else Null
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (seze == 0)
		return (NULL);
	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);
	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';
	return (p);
}
