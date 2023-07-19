#include "function_pointers.h"
/**
 * print_name -function that prints a name
 * @name: the name
 * @f: function
 * root-codes
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;
	f(name);
}
