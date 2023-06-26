#include "main.h"
/**
 * _strlen - the function of a string
 * @s: check char
 * Return: 0 Success
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
