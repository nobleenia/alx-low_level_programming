#include "main.h"

/**
 * times_table - the starting point of the program
 *
 * 
 */
void times_table(void)
{
int  row_val, col_val, product_val;

for (row_val = 0; row_val <= 9; row_val++)
{
for (col_val = 0; col_val <= 9; col_val++)
{
product_val = row_val * col_val;
if (col_val == 0)
{
_putchar('0' + product_val);
}
if (product_val < 10  && col_val != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + product_val);
}
 else if (product_val >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((product_val / 10) + '0');
_putchar((product_val % 10) + '0');
}
}
_putchar('\n');
}
}
