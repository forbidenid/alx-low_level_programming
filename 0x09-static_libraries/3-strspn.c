#include "main.h"
/**
 * _strspn - function y=that calculates the length in byted of the initia;
 * segment
 * @s: string
 * @accept: bytes to search for
 * root-codes
 * Return: number of bytes matching
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, z, count, checker;

	i = 0;
	z = 0;
	count = 0;
	checker = 0;

	while (s[i] != '\0')
	{
		z = 0;
		checker = 0;
		while (accept[z] == s[i])
		{
			if (accept[z] == s[i])
			{
				cout++;
				checker = 1;
				break;
			}
			z++;
		}
		if (checker == 0)
			return (count);
		i++;
	}
	return (count);
}
