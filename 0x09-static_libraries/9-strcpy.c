#include "main.h"
/**
 * _strcpy - copt the string pointed to source by dest
 * @dest: destination
 * @src: source
 * root-codes
 * Return: 0 success
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
