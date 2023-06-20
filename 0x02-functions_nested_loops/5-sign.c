#include "main.h"

/**
 * print_sign - the start of the program
 * @n: the number whose sign is to be checked
 * Return: 0 if number is zero, 1 if number is positive, -1 if number is negative
 */
int print_sign(int n)
{
int checker = 0
  if (n > 0)
    {
     checker = 1;
     _putchar('+');
    }
  else if (n < 0)
    {
     checker = -1;
     _putchar('-');
    }
  else
    _putchar('0');
 return (checker);
}
