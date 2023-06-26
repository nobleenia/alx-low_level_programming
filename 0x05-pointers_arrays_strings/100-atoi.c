#include "main.h"

/**
 * _atoi - a function that convert a string to an integer
 * @s: input string to be converted
 * Return: 0
 */
int _atoi(char *s)
{
int a = 0;
int b = 0;
int n = 0;
int len = 0;
int i = 0;
int num = 0;

while (s[len] != '\0')
{
len++;
}

while (n < len && i == 0)
{
if (s[n] == '-')
++b;
else if (s[n] >= '0' && s[n] <= '9')
{
num = s[n] - '0';
if (b % 2)
{
num = -num;
a = (a * 10) + num;
i = 1;
}
else
{
a = (a * 10) + num;
i = 1;
}
}
else
{
i = 1;
}
n++;
}

if (a == 0)
{
return (0);
}

return (a);
}
