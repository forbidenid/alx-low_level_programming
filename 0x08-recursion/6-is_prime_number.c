#include "main.h"

int prime_number(int n, int i)

/**
 * is_prime_number - function that cgecks if a number is a prime number
 * @n: number that is being tested
 * root-codes
 * Return: 1 is a prime else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, n - 1));
}
/**
 * prime_number - help function for is_prime_number
 * @n: number being tested
 * @i: number being tested with
 * root-codes
 * Return: 1 if a else 0
 */

int prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0)
		return (0);
	else if (n % 1 != 0)
		return (prime_number(n, i - 1));
	return (0);
}
