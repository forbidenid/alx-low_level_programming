#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name -function that prints a name
 * @name: the name
 * @f: function
 * root-codes
 */

void print_name(char *name, void (*f)(char *));
{
	if (!name || !f)
		return;
	f(name);
}
