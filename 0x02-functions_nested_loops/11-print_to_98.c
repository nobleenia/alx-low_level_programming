#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 */
void print_to_98(int n)
{
int first_digit, second_digit;
if (n <= 98)
{
for (first_digit = n; first_digit <= 98; first_digit++)
{
if (first_digit != 98)
printf("%d", first_digit);
else if (first_digit == 98)
printf("%d\n", first_digit);
}
}
else if (n >= 98)
{
for (second_digit = n; second_digit >= 98; second_digit--)
{
if (second_digit != 98)
printf("%d", second_digit);
else if (second_digit == 98)
  printf("%d\n", second_digit);
}
}
}
