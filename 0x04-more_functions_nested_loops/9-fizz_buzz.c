#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: 0 (success)
 */
int main(void)
{
int a;
for (a = 1; a < 100; a++)
{
if ((a % 3 == 0) && (a % 5 == 0))
{
printf("FizzBuzz ");
}
else if (a % 3 == 0)
{
printf("Fizz ");
}
else if (a % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", a);
}
}
printf("Buzz");
printf("\n");
return (0);
}
