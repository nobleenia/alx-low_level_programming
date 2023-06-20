#include "main.h"

/**
 *
 *
 *
 */
void times_table(void)
{
int  row_val, col_val, product_val;

row_val = 0;
while (row_val <= 9)
{
col_val = 0;
while (col_val <= 9)
{
product_val = row_val * col_val;
if (col_val != 9)
{
if ((product_val / 10) == 0)
{
_putchar(product_val + '0');
_putchar(',');
_putchar(' ');
}
else
{
_putchar((product_val / 10) + '0');
_putchar((product_val % 10) + '0');
_putchar(',');
_putchar(' ');
}
}
else
{
if ((product_val / 10) == 0)
{
_putchar(product_val + '0');                  
}
else
{
_putchar((product_val / 10) + '0');
_putchar((product_val % 10) + '0');
}
}
col_val++;
}
row_val++;
_putchar('\n');
}
}
