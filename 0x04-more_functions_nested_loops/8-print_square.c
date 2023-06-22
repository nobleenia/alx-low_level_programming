#include "main.h"
/**
 *
 *
 *
 */
void print_square(int size)
{
int b, l;
if size > 0
{
for (b = 0; b <= size; b++)
{
for (l = 0; l <= size; l++)
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
