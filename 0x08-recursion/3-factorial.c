#include "main.h"

/**
 * factorial - description
 * @n: The number to find the factorial for.
 * root-codes
 * Return: Factorial INT
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
