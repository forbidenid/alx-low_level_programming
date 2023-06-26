#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * @s: char
 * Return: 0 Success
 */
void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n] != '\0')
		n++;
	for (i = n - 1; 1>= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
