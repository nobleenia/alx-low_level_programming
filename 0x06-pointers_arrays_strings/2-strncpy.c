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

i = 0;
while (i < n)
{
dest[i] = src[i];
if (src[i] == '\0')
{
break;
}
i++;
}
dest[i] = '\0';
  
return (dest);
}
