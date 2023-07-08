#include "main.h"
/**
 * _memset - function that fills memory with constant byte
 * @b: constant byte
 * @n: number of bytes
 * @s: pointer to memory
 * root-codes
 * Return: a pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
