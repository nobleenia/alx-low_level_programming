#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the items in an array to a given limit
 * @a: the input array
 * @n: the limit of printing
 */
void print_array(int *a, int n)
{
int count;
for (count = 0; count < n; count++)
{
if (count < (n - 1))
{
printf("%d", a[count]);
printf(", ");
}
else
{
printf("%d", a[count]);
}
}
printf("\n");
}
