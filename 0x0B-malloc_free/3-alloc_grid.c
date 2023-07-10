#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the input for array width
 * @height: input integr for array height
 *
 * Return: NULL failure and grid for success
 */
int **alloc_grid(int width, int height)
{
int h, w;
int **grid = malloc(height * sizeof(int *));

if (width < 1 || height < 1)
{
return (NULL);
}

if (grid == NULL)
{
return (NULL);
}

for (h = 0; h < height; h++)
{
grid[h] = malloc(width * sizeof(int));
if (grid[h] == NULL)
{
for (w = h - 1; w >= 0; w++)
{
free(grid[w]);
}
free(grid);

return (NULL);
}
for (w = 0; w < width[h]; w++)
{
grid[h][w] = 0;
}
}

return (grid);
}
