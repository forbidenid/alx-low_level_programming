#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (!*s)
	{
		_puchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion((s + 1));
}
