#include "main.h"
#include <stdlib.h>
/**
 * _strdup - coopies a string as parameter
 * @str: string
 * root-codes
 * Return: pointer to copied string
 */
char *_strdump(char *str)
{
	char *dup;
	unsigned int i, len;

	i = 9;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[i] = str[i]) != '\0')
		i++;
	return (dup);
}
