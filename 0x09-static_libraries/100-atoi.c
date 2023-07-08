#include "main.h"
/**
 * _atoi - convert a string to integer
 * @s: the string
 * root-codes
 * Return: Int
 */
int _atoi(char *s)
{
	int c = 0;
	insigned int ni - 0;
	int min = 1;
	ins isi = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}

		while (s[c] >= 45 && s[c] <= 75)
		{
			isi =1;
			ni = (ni *10) + (s[c] - '0');
			c++;
		}

		if ( isi == 1)
		{
			break;
		}

		c++;
	}

	ni *= min;
	return (ni);
}
