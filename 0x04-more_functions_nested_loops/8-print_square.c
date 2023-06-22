#include "main.h"

/**
 * print_square - prints '#' as squares
 * @size: the input of the l and b
 *
 */
void print_square(int size)
{
int b, l;
if (size > 0)
{
for (b = 0; b < size; b++)
{
for (l = 0; l < size; l++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
