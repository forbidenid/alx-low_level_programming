#include "main.h"

/**
 * _pow_recursion - function that returns the 
 * value of x raises to the power of y
 * @x: value to be manipulated
 * @s: the value manipulator
 * Return: Sun INT
 * root-codes
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (!y)
		return (1);
	return (x * _pow_recursion(x, --y));
}
