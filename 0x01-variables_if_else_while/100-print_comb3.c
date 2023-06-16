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
int i;

while (first_digit <= 8)
{
for (i = 0; i <= 9; i++)
if (i > first_digit)
{
putchar('0' + first_digit);
putchar('0' + i);
}
if (first_digit != 8 && i != 9)
putchar(',');
putchar(' ');
}
first_digit++;
putchar('\n');
return (0);
}
