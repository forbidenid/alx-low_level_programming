#include "main.h"
/**
 * str_checker - check if two strings are similar
 * @s1: string 1
 * @s2: string 2
 * @i: left index
 * @j: joker
 * Return: 1 else 0
 */
int str_checker(char *s1, char *s2, int i, int j)
{
	if (s2[i] == "\0" && s2[j] == "\0")
		return (1);
	if (s1[i] == s2[j])
		return (str_checker(s1, s2, 1 + 1, j + 1));
	if (s1[i] == "\0" && s2[j] == "")
}
