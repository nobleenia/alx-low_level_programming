#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: The string to be converted
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
int sign = 1;
int digit = 0;
int result = 0;
int i = 0;

if (s[i] == '-')
{
sign = -1;
i++;
}
else if (s[i] == '+')
{
i++;
}
while (s[i] != '\0')
{
if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10))
{
return (sign == -1) ? INT_MIN : INT_MAX;
}
result = result * 10 + digit;
}
else
{
break;
}
i++;
}
return result * sign;
}
