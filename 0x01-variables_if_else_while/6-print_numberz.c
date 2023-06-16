#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 (Indicates success)
 */
int main(void)
{
int single_digit = 0;

while (single_digit <= 9)
{
putchar(single_digit);
single_digit++;
}
putchar('\n');
return (0);
}
