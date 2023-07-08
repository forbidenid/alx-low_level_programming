#include "main.h"
/**
 * _strchr - returns a point to the first app of the cher str
 * @s: string
 * @c: char
 * root-codes
 * Return: pointer to char
 */
char *_strchr(char *s, char *c)
{
	int i;

	i = 0;
	while (s[1] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (c == '\0')
		return (s + i);
	return (NULL);
}
