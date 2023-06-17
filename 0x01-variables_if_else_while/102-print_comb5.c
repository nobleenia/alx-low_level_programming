#include <stdio.h>

/**
 * main - start of function that combines two digit numbers up to 99
 * for loop for first_digit
 * for loop for second_digit
 *
 * Return: 0 (indicates successful completion)
 */
int main(void)
{
int first_digit, second_digit;
for (first_digit = 0; first_digit < 100; first_digit++)
{
for (second_digit = 0; second_digit < 100; second_digit++)
{
if (first_digit < second_digit)
{
putchar('48' + (first_digit / 10));
putchar('48' + (first_digit % 10));
putchar(' ');
putchar('48' + (second_digit / 10));
putchar('48' + (second_digit % 10));
if (first_digit != 98 || second_digit != 99)
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
