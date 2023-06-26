#include "main.h"

/**
 * _strcpy - function that copies the string pointed to
 * @dest: address of buffer to copy string to
 * @src: address of string to be copied
 */
char *_strcpy(char *dest, char *src)
{
int n;
while (*(src + n))
{
*(dest + n) = *(src + n);
n++;
}

*(dest + n) = '\0';

return (dest);
}
