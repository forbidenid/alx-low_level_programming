#include "main.h"
/**
 * _memcpy -gunction that copies bytes from a source to destination
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * root-codes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
