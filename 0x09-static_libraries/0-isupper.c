#include "main.h"
/**
 * _isupper - upercase letters
 * @c: character to check
 * root-codes
 * Return: 0 , 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
