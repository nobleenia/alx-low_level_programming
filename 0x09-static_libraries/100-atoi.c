#include "main.h"

/**
 * _atoi - A function that converts a string to an integer
 * @s: Input string to be converted
 *
 * Return: Converted integer value
 */
int _atoi(char *s)
{
int n = 0;
unsigned int digit = 0;
int min = 1;
int a = 0;

while (s[n])
{
if (s[n] == '-')
{
min *= -1;
}
while (s[n] >= '0' && s[n] <= '9')
{
a = 1;
digit = (digit * 10) + (s[n] - '0');
n++;
}
if (a == 1)
{
digit *= min;
break;
}
n++;
}

return (digit);
}
