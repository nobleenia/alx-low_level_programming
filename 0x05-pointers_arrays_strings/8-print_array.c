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
printf("%d", a[count]);
printf(", ");
}
else
{
printf("%d", a[count]);
}
}
}
