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
if (row_val < 9)
{
if ((row_val / 10) == 0);
{
_putchar(product_char + '0');
_putchar(',');
_putchar(' ');
}
else
{
_putchar((product_char / 10) + '0');
_putchar((product % 10) + '0');
_putchar(',');
_putchar(' ');
}
}
else
{
if ((row_val / 10) == 0);
{
_putchar(product_char + '0');                  
}
else
{
_putchar((product_char / 10) + '0');
_putchar((product % 10) + '0');
}
}
col_val++;
}
row_val++;
_putchar('\n');
}
}
