#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: first string to be checked
 * @s2: second string to be checked
 *
 * Return: the return value
 */
int _strcmp(char *s1, char *s2)
{
int d = 0;
while (*s1 && *s2)
{
if (*s1 != *s2)
{
d = *s1 - *s2;
return (d);
}
s1++;
s2++;
}
return (d);
}
