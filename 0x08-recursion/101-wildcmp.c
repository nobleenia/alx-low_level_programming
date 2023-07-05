#include "main.h"

/**
 * wildcmp - compare twoinput string
 * @s1: first input string
 * @s2: second input string
 *
 * Return: 0 successful
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0')
{
if (*s2 != '\0' && *s2 == '*')
{
return (wildcmp(s1, s2 + 1));
}
else
{
return (*s2 == '\0');
}
}
else if (*s2 == '*')
{
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
}
else if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
return (0);
}
