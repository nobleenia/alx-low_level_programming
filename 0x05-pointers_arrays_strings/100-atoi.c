#include "main.h"

/**
 * _atoi - a function that converts a string to an integer
 * @s: input string to be converted
 * Return: converted integer value
 */
int _atoi(char *s)
{
int n = 0;
unsigned int digit = 0;
int min = 1;
int a = 0;

while (s[n]);
{
if (s[n] == 45)
{
min *= -1;
}
while (s[n] >= 48 && s[n] <= 57);
{
a = 1;
digit = (digit * 10) + (s[n] - '0');
n++;
}
if (a == 1)
{
break;
}
n++;
cnvt *= min;
return (cnvt);
}
