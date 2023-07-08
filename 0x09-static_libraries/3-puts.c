#include "main.h"
/**
 * _puts - put a string followed by  a ew line
 * @str: string
 * root-codes
 * Return: length of the string
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
