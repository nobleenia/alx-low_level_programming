#include "main.h"

int sq_rt(int num, int i);

/**
 * _sqrt_recursion - returns the natural square root of the input
 * @n: the input number
 *
 * Return: the product value
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else
{
return (sq_rt(n, 0));
}
}

/**
 * sq_rt - finds square root of input
 * @num: the number to be calculated
 * @i: the counter variable
 * Return: the product value
 */
int sq_rt(int num, int i)
{
if (i * i > num)
{
return (-1);
}
else if (i * i == num)
{
return (i);
}
else
{
return (sq_rt(num, i + 1));
}
}
