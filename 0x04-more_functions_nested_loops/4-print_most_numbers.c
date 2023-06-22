#include "main.h"

/**
 * print_most_numbers - the start of function
 *
 * digit - the characters being printed
 */
void print_most_numbers(void)
{
char digit = '0';
while (digit <= '9')
{
if ((digit != '2') || (digit != '4'))
{
_putchar(digit);
}
digit++;
}
_putchar('\n');
}
