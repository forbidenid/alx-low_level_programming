#include "main.h"
/**
 * _isalpha - checks if a cgaracter is alphabetic
 * @c: charactr
 * root-codes
 * Return: 1 if char is lowercase,uppercase, else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z' ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
