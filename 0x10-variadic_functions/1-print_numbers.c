#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sum all the arguments in the variadic function
 * @n: first input of the function
 *
 * Return: an integer containing the sum
 */
int sum_them_all(const unsigned int n, ...)
{

va_list add;
unsigned int i, sum;

if (n == 0)
{
return (0);
}

va_start(add, n);

sum = 0;
for (i = 0; i < n; i++)
{
sum += va_arg(add, int);
}

va_end(add);

return (sum);
}
