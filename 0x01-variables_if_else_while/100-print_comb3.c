#include <stdio.h>

/**
 * main - input of the code
 * for loop for the first digit
 * for loop that iterates the second digit
 * Return: 0 (successful)
 */
int main(void)
{
int first_digit = 0;
int second_digit = 0;

while (first_digit <= 9)
{
while (second_digit <= 9)
{
if (second_digit > first_digit)
{
putchar('0' + first_digit);
putchar('0' + second_digit);
if (first_digit != 9 || second_digit != 9)
{
putchar(',');
putchar(' ');
}
}
second_digit++;
}
first_digit++;
}
putchar('\n');
return (0);
}
