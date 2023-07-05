#include "main.h"

/**
 * factorial - writes the factorial of the input
 * @n: the input integer
 *
 * Return: the factorial product
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
