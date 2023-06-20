#include "main.h"

/**
 * print_last_digit - the start of the program
 * @d: the number whose last digit is to be returned
 * Return: the value of the last_digit
 */
int print_last_digit(int d)
{
int last_digit = d % 10;
if (last_digit < 0)
{
last_digit = last_digit * -1;
}
_putchar('0' + last_digit);
return (last_digit);
}
