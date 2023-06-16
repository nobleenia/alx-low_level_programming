#include <stdio.h>

/**
 * main - input of the code
 * for loop for the first digit
 * for loop that iterates the second digit
 * Return: 0 (successful)
 */
int main(void)
{
int first_digit, second_digit;

for (first_digit = 0; first_digit <= 8; first_digit++)
{
for (second_digit = 0; second_digit <= 9; second_digit++)
{
if (second_digit > first_digit)
{
putchar(first_digit);
putchar(second_digit);
if (first_digit != 8 || second_digit != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
