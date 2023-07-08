#include "main.h"
/**
 * _strcpy - function that copies a string
 * @src: source
 * @dest: destination
 * @n: int
 * root-codes
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src +i);
	}
	for (; i < n: i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
