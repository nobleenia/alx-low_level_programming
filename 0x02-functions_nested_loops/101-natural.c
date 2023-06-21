#include <stdio.h>

/**
 * main - the starting point of the function
 * for function
 * Return: 0 success
 */
int main(void)
{
int sum, i = 0;

for (i = 0; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
sum = sum + i;
}
printf("%d\n", sum);

return (0);
}
