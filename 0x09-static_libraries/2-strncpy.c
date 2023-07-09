#include "main.h"
/**
 * _strncpy - function that copies a string
 * @src: source
 * @dest: destination
 * root-codes
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
