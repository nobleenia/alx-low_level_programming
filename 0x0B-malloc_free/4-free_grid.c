#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -  frees a 2 dimensional grid
 * @grid: the greed to be freed
 * @height: the rows in the 2D array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
int n;

for (n = 0; n < height; n++)
{
free(grid[n]);
}
free(grid);
}
