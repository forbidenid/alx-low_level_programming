#include "main.h"
/**
 * _strncat - concatenates two strings
 * @str: The source of a string
 * @dest: destination
 * @n: length of int
 * root-codes
 * Return: pointer to destination
 */
char *_strncat(char *dest, char *str, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j  = 0; str[j] != '\0' && j < n; j++)
	{
		dest[i + j] = str[j];
	}
	dest[i + j] = '\0';
	return(dest);
}
