#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: first integer input
 * @max: second integer input
 *
 * Return: NULL or an  array of integer
 */
int *array_range(int min, int max)
{
int i, n;
int *new_arr;

if (min > max)
{
return (NULL);
}

n = (max - min) + 1;

new_arr = malloc(n *sizeof(int));
if (new_arr == NULL)
{
return (NULL);
}

for (i = 0; i < n; i++)
{
new_arr[i] = min++;
}
return (new_arr);
}
