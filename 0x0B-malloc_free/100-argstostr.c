#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments of the progran
 * @ac: argument
 * @av: pointer
 * root-codes
 * Return: NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, s, size;
	char *arg;

	size = 0;
	s = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			size++;
		}
		size++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	s = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			arg[s] = av[i][j];
			s++;
		}
		arg[s] = '\n';
		s++;
	}
	arg[s] = '\0';

	return (arg);
}
