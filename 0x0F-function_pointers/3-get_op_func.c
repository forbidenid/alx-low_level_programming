#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - fumction op
 * @s: opretator
 * Return: pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"*", op_mul},
		{"%", op_mod},
		{"/", op_div},
		{"-", op_sub},
		{NULL, NULL}
	    };
	int i;

	i = 0;
	while (ops[i].op != NULL && s[1] == '\0')
	{
		if (ops[i].op[0] == *s)
			return ((ops[i].f));
		i++;
	}

	return (NULL);
}
