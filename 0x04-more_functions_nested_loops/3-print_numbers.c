#include "main.h"

/**
 * print_numbers - starting point of function
 *
 * digit - the digits to be printed
 */
void print_numbers(void)
{

char digit = '0';

while (digit <= '9')
{
putchar(digit);
digit++;
}
_putchar('\n');
}
