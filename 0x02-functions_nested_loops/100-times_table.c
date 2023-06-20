#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n : The operand that specifies the size of time table
 *
 * Return: void
 */
void print_times_table(int n)
{
int first_val, second_val, product_val;

if (n < 0 || n > 15)
return;

for (first_val = 0; first_val <= n; first_val++)
{
for (second_val = 0; second_val <= n; second_val++)
product_val = first_val * second_val;
if (second_val == 0)
_putchar('0' + product_val);
else
{
_putchar(',');
_putchar(' ');
if (product_val <= 9)
{
_putchar(' ');
_putchar(' ');
_putchar('0' + product_val);
}
else if (product_val <= 99)
{
_putchar(' ');
_putchar('0' + (product_val / 10));
_putchar('0' + (product_val % 10));
}
else
{
_putchar('0' + (product_val / 100));
_putchar('0' + ((product_val / 10) % 10));
 _putchar('0' + (product_val % 10));
}
}
}
_putchar('\n');
}
}
