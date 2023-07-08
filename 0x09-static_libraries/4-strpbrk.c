#include "main.h"
/**
 * _strpbrk - function tht searches string for any orm of byte
 * @s: haustuck
 * @accept: needle
 * root-codes
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, z;
	 i = 0;
	 z = 1;
	while (s[i] != '\0')
	{
		z = 0;
		while (accept[z] != '\0')
		{
			if (s[i] == accept[z])
				return (s + 1);
			z++;
		}
		i++;
	}
	return (NULL);
}
