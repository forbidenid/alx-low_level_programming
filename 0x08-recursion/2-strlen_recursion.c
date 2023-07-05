#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a sdtring
 * @s: string to check
 * Return: the ength of a string as INT
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion((s + 1)));
	return (0);
}
