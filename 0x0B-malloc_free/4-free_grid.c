#include "main.h"
#include <stdlib.h>
/**
 * print_grid - prints a grid of integers
 * @grid: the addres of two dimensional grid
 * root-codes
 * Return: 0 (Success)
 */
void print_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
