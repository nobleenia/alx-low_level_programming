#include "main.h"

/**
 * _pow_recursion - returns the value of x^y
 * @x: the base digit
 * @y: the power digit
 *
 * Return: -1, 1 or actual value by conditions
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x = x * _pow_recursion(x, y - 1));
}
}
