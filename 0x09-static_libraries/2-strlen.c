#include "main.h"
/**
 * _strlen - the function of a string
 * @s: char
 * root-codes
 * Return: 0 Sucess
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
