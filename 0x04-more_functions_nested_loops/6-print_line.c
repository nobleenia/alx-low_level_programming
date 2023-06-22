#include "main.h"

/**
 * void print_line(int n) - start of function
 * @n: number of times to print
 */
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
