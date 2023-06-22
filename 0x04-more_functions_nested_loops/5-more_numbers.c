#include "main.h"

/**
 * more_numbers - start of function
 *
 *
 */
void more_numbers(void)
{
int digit = 0;
int counter;
for (counter = 0; counter <= 9; counter++)
{
while (digit <= 14)
{
if (digit > 9)
_putchar('0' + (digit / 10));
_putchar('0' + (digit % 10));
digit++;
}
digit = 0;
_putchar('\n');
}
}
