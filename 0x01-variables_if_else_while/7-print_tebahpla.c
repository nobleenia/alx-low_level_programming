#include <stdio.h>

/**
 * main - The program start point
 * while loop that writes all the letters
 * Return: 0 (indicates success)
 */

int main(void)
{
char lower_cases = 'z';

while (lower_cases >= 'a')
{
putchar(lower_cases);
lower_cases--;
}
putchar('\n');
return (0);
}
