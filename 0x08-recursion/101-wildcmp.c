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
	if (s2[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (str_checker(s1, s2, ++i, ++j));
	if (s1[i] == '\0' && s2[j] == '*')
		return (str_checker(s1, s2, i, ++j));
	if (s2[j] == '*')
		return (str_checker(s1, s2, ++i, j) || str_checker(s1, s2, i, ++j));
	return (0);

}

/**
 * wildcmp - check if the string is identical
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if similar
 */
int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0);
}
