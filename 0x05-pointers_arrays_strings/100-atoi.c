#include "main.h"
#include <limits.h>

/**
 * _atoi - a function that convert a string to an integer
 * @s: input string to be converted
 * Return: 0
 */
int _atoi(char *s)
{
int sign = 1;
int digit = 0;
int n = 0;

if (s[n] == '-')
{
sign = -1;
n++;
}

while (s[n] != '\0')
{
if (s[n] >= '0' && s[n] <= '9')
{
int current_digit = s[i] - '0';
if (digit > INT_MAX / 10 || (digit == INT_MAX / 10 && current_digit > INT_MAX % 10))
{
return (sign == -1) ? INT_MIN : INT_MAX;
}

digit = digit * 10 + current_digit;
}
else
{
break;
}
n++;
}
return digit * sign;
}
