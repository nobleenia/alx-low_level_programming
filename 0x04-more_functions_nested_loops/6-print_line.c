#include "main.h"

/**
 * void print_line(int n) - start of function
 * @n: number of times to print
 */
void print_line(int n)
{
int i = 0;

if (n > 0)
{
for (; i < n; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
