#include "main.h"

/**
 * print_number - start of program
 *
 * @n: integer to be printed
 */
void print_number(int n)
{
unsigned int digit;

if (n < 0)
{
digit = -n;
_putchar('-');
}
else
{
digit = n;
}
if (digit / 10)
{
print_number(digit / 10)
}
_putchar('0' + (digit % 10));
}
