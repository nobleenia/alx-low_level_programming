#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: string to check
 * @accept: string containing the only accepted bytes
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return ('\0');
}
