#include <stdio.h>
#include <stdlib.h>
/**
 * main -  header function
 * @argc: count
 * @argv: string
 * root-codes
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, sum = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		sum *= atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
}
