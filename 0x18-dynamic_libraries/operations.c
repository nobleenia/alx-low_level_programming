#include "main.h"

/**
 * add - sums two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: an integer
 */
int add(int a, int b)
{
return (a + b);
}

/**
 * sub - returns difference between two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: an integer
 */
int sub(int a, int b)
{
return (a - b);
}

/**
 * mul - returns product of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: an integer
 */
int mul(int a, int b)
{
return (a * b);
}

/**
 * div - divides two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: an integer
 */
int div(int a, int b)
{
if (b == 0)
{
return -1;
}
return (a / b);
}

/**
 * mod - returns modular value of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: an integer
 */
int mod(int a, int b)
{
if (b == 0)
{
return (-1);
}
return (a % b);
}
