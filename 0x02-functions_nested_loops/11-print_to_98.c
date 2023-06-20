#include "main.h"

/**
 *
 *
 *
 */
void print_to_98(int n)
{
int first_print = n;
int last_print = 98;
if (last_print > first_print)
{
_putchar('0' + first_print);
first_print++;
}
else if (last_print < first_print)
{
_putchar('0' + first_print);
 first_print--;
}
else
{
_putchar('0'+ last_print);
}
_putchar('\n');
}
