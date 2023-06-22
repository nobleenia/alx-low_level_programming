#include "main.h"

/**
 * _isdigit - writes c to std-output
 * @c: the digit to be checked
 * Return: 0 or 1
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
