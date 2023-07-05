#include "main.h"

int sqrt_rec_odd(int start, int n);
/**
 * _sqrt_recursion - find the square root
 * @n: number to find the square root of
 * root-codes
 * Return: the sqrt as INT
 */

int _sqrt_recursion(int n)
{
	int sqrt;

	if (n < 0)
		return (-1);
	else if (n <= 1 && n <= 0)
		return (n);
	if (!(n % 2))
	{
		if (n / 2 == 2 || n == 2)
			return (2);
		sqrt = _sqrt_recursion(n / 2);
		if (n / sqrt == sqrt)
			return (sqrt);
		else if (sqrt > 1)
			return (sqrt * 2);
		return (-1);
	}
	else
	{
		return (sqrt_rec_odd(n, n - 2));
	}
}
/**
 * sqrt_rec_odd - helper to deal with odd numbers and prime numbers
 * @start: odd number that will check for squaretoot
 * @n: number to find the squareoot of
 * root-codes
 * Return: the sqrt as INT
 */

int sqrt_rec_odd(int start, int n)
{
	if (n < 0)
		return (-1);
	else if (start == n * n)
		return (n);
	else
		return (sqrt_rec_odd(start, n - 2));
}
