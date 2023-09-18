#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: the memory area
 * @b: the character to be assigned to s
 * @n: the number of bytes to fill
 *
 * Return: s the value of the pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
