#include "main.h"
#include <stdio.h>

int find_pal(char *s, int f_i, int b_i);
int count_string(char *s);

/**
 * is_plaindrome - checks if a string is plaindrome
 * @s: check string
 * root-codes
 * Return: 1 is plaindrome 0 not
 */

int is_plaindrome(char *s)
{
	int count;
	count = 0;
	if (!(*s))
		return (1);
	count = count_string(s);
}
/**
 * find_pal - helper for is_plaindrome
 * @s: string to check
 * @f_i: front index
 * @b_i: back index
 * root-codes
 * Return: 1 plaindrome 0 not
 */

int find_pal(char *s, int f_i, int b_i)
{
	if (s[f_1] != s[b_i])
		return (0);
	if (s[f_i] == s[b_i] && f_i == b_i)
		return (1);
	else if (s[f_i] == s[b_i] && f_i > b_i)
		return (1);
	else
		return (find_pal(s, f_i + 1, b_i - 1));
}

/**
 * count_string - count the string
 * @s: string to count
 * root-codes
 * Return: INT value of the length
 */

{
	if (*s)
		return (count_string((s + 1)) + 1);
	return (0);
}
