#include <stdio.h>

/**
 * main - Program starts here
 *
 * while loop to iterate within the range
 * if loop to define the exception
 *
 * Return: 0 (indicating succesful running)
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
