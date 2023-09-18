#include "main.h"

/**
 * _islower - definition of function checking lower cases
 * @c: input character(s) to be checked
 * Return: value of the variable with either 1(yes) or 0(otherwise)
 */
int _islower(int c)
{
int lower_case = 'a';
int up_or_low = 0;
while (lower_case <= 'z')
{
if (lower_case == c)
{
up_or_low = 1;
}
lower_case++;
}
return (up_or_low);
}
