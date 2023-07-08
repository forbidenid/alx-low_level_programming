#incluse "main.h"
/**
 * _strcat - concatenates two strings
 * @src: The source of a string
 * @dest: destination
 * @n: length of int
 * root-codes
 * Return: pointer to destination
 */
char *strncat(char *dest, char *str, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j  = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j]'
	}
	dest[i + j] = '\0';
	return(dest);
}
