#include <stdio.h>

/**
 *
 *
 *
 *
 *
 */
int main(void)
{
int digits = 0;

while (digits <= 9)
{
putchar('0' + digits);

if (digits != 9)
{
putchar(',');
putchar(' ');
}
digits++;
}

putchar('\n');
return (0);
}
