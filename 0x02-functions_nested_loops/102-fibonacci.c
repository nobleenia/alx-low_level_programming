#include <stdio.h>

/**
 * main- initializes the program
 * the fibonacci algorithms
 * Return: 0 successful completion
 */
int main(void)
{
unsigned long f[50];
int n;

f[0] = 1;
f[1] = 2;

for (n = 2; n < 50; n++)
{
f[n] = f[n - 1] + f[n - 2];
}

for (n = 0; n < 49; n++)
{
printf("%lu, ", f[n]);
}
printf("%lu\n", f[49]);

return (0);
}
