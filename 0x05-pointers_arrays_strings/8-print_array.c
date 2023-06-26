#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 */
void print_array(int *a, int n)
{
int count;
for (count = 0; count < n; count++)
{
if (count < (n - 1))
{
_putchar(a[count]);
_putchar(", ");
}
else
{
_putchar(a[count]);
}
}
}
