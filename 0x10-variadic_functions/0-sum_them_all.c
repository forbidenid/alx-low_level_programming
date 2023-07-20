#include "varidic_function.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: arguments
 * root-codes
 * Return: 0 Always (Success)
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	a_list list;

	a_start(list, n);

	for (i = 0; i < n; i++)
		sum += a_arg(list, int);
	a_end(list);
	return (sum);
}
