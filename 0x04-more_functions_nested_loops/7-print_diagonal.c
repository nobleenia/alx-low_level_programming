#include "main.h"

/**
 * print_diagonal - the entry point of the function
 * @n: the number of diagonals to print
 *
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int a, b;
for (a = 0; a < n; a++)
{
for (b = 0; b < n; b++)
{
if (b == a)
{
_putchar('\\');
}
else if (b < a)
{
_putchar(' ');
}
}
_putchar('\n');
}
}
}
