#include "main.h"

/**
 * _abs - entry point of the function
 * @d: the number to be absoluted
 * Return: d multiplied by - if d is negative
 */
int _abs(int d)
{
if (d <= 0)
{
return (d * -1);
}
return (d);
}
