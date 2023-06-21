#include "main.h"

/**
 * print_times_table - prints multiplication tables, starting with 0
 * @n: input for the size of time table
 */
void print_times_table(int n)
{
int first_val, second_val, product_val;

if (n >= 0 && n <= 15)
{
for (first_val = 0; first_val <= n; first_val++)
{
for (second_val = 0; second_val <= n; second_val++)
{
product_val = first_val * second_val;
if (second_val == 0)
{
_putchar('0' + product_val);
}
else if (product_val < 10)
{
_putchar(',');
_putchar(' ');
if (product_val < 10)
{
_putchar(' ');
}
 else
{
_putchar('0' + (product_val / 10));
_putchar('0' + (product_val % 10));
}
}
else if (product_val >= 10 && second_val < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + (product_val / 10));
_putchar('0' + ((product_val / 10) % 10));
}
else if (product_val >= 100)
{
_putchar(',');
_putchar('0' + (product_val / 100));
_putchar('0' + ((product_val / 10) % 10));
_putchar('0' + (product_val % 10));
}
}
_putchar('\n');
}
}
}
