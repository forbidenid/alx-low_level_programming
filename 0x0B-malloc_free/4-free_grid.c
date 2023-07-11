#include "main.h"
#include <stdlib.h>
/**
 * free_grid - prints a grid of integers
 * @grid: the addres of two dimensional grid
 * @height: height
 * root-codes
 * Return: 0 (Success)
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
