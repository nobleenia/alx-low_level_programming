#include <stdio.h>

/**
 * main - input of the code
 * while loop for the first digit
 * for loop that iterates the second digit
 * Return: 0 (successful)
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
first_digit++;
}
if (first_digit != 8 && i != 9)
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
