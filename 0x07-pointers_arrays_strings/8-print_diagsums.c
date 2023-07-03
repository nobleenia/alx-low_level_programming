#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints diagonal sum of a square matrix
 * @a: the array of integers input
 * @size: the size of the array
 *
 * Return: 0 successful
 */
void print_diagsums(int *a, int size)
{
int sum_r, sum_l;
int n = 0;
for (; n < size; n++)
{
sum_r = sum_r + a[n * size + n];
}
for (n = size - 1; n >= 0; n--)
{
sum_l = sum_l + a[n * size + (size - n - 1)];
}
printf("%d, %d\n", sum_r, sum_l);
}
