#include "main.h"

/**
 * _strncpy - function that copies strings
 * @dest: pointer to the destination string
 * @src: pointer to the string being copied
 * @n: the number of characters to copy
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

i = 0;
while ((i < n) && (src[i] != '\0'))
{
dest[i] = src[i];
i++;
}

while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
