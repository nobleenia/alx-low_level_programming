#include "main.h"

/**
 * _strncpy - function that copies strings
 * @dest: pointer to the destination string
 * @src: pointer to strings being copied
 * @n: the number of strings to copy
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] =! '\0'; i++)
{
dest[i] = src[i];
}

for (i = 0; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
