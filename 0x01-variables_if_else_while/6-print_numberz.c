#include <stdio.h>

/**
 *
 *
 *
 */
int main(void)
{
int single_digit = 0;
while (single_digit <= 9)
{
putchar('%i', single_digit);
single_digit++;
}
putchar('\n');
return (0);
}
