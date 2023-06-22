#include "main.h"

/**
 * print_triangle - starting point of the program
 * @size: the number of '#' to be printed
 *
 */
void print_triangle(int size)
{
int b, h, i = size - 1;
if (size > 0)
{
for (h = 0; h < size; h++)
{
for (b = 0; b < size; b++)
{
if (b < i)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
n--;
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
