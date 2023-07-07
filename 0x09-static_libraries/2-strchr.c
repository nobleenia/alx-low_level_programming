#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string in which c is checked for
 * @c: character searched for in s
 *
 * Return: 0 successful
 */
char *_strchr(char *s, char c)
{
int n = 0;
while (s[n] >= '\0')
{
if (s[n] == c)
return (&s[n]);
n++;
}
return (0);
}
