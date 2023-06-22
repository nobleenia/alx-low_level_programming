#include <stdio.h>

/**
 * main - starting point of program
 *
 * Return: 0 (indicating successful)
 */
int main(void)
{
unsigned long n = 3;
unsigned long l = 612852475143;

for (; n < 12057; n += 2)
{
while ((l % n == 0) && (l != n))
l /= n;
}
printf("%lu\n", l);
return (0);
}
