#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings
 * followed by a new line.
 * @n: number of strings passed to the function
 * @separator: string to be printed between the strings
 * root-codes
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	char *str;

	va_list list;

	va_start(list, n);

	for (j = 0; j < n; j++)
	{
		str = va_arg(list, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && j == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);

	}
	printf("\n");
	va_end(list);
}
