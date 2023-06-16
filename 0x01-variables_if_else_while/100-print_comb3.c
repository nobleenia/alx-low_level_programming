#include <stdio.h>

/**
 *
 *
 *
 *
 */
int main(void)
{
int first_digit = 0;
int second_digit = 0;

while (second_digit <= 9)
{
while (first_digit <= 8)
{
if (second_digit > first_digit)
putchar('0' + first_digit);
putchar('0' + second_digit);
second_digit++;
first_digit++;
}
if (second_digit != 9 || first_digit != 8)
putchar(',');
putchar(' ');
second_digit++;
first_digit++;
}
putchar('\n');
return (0);
}
