#include "main.h"
/**
 * _islower - check if the string is lower case
 * @c: char
 * root-codes
 * Return: 1 if lowercase else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
