#include "main.h"
/**
 * _isdigit - function to check a digit 0 to 9
 * @c: char to check
 * root-codes
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
