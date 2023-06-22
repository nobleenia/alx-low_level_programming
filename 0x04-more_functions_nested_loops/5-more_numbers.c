#include "main.h"

/**
 *
 *
 *
 */
void more_numbers(void)
{
char digit = '0';
char counter;
for (counter = '0'; counter <= '9'; counter++)
{
while (digit <= "14")
{
_putchar(digit);
digit++;
}
_putchar('\n');
}
}
