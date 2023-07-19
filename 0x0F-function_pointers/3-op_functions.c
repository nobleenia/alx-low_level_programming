#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * opp_add - sums two integers
 * @a: first integer input
 * @b: second integer input
 *
 * Return: the integer value of the sum
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - finds the difference between two integers
 * @a: first integer input
 * @b: second integer input
 *
 * Return: the integer value of the difference
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: the first integer input
 * @b: the second integer input
 *
 * Return: the product value
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - divides two integers
 * @a: the numerator
 * @b: the denominator
 *
 * Return: the value of the division
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}

return (a / b);
}

/**
 * op_mod - finds the modular of the inputs
 * @a: the first input
 * @b: the modular divisor
 *
 * Return: the value of the modular division
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}

return (a % b);
}
