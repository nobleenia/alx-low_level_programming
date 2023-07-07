#include "main.h"

/**
 * _strcpy - function that copies the string pointed to
 * @dest: address of buffer to copy string to
 * @src: address of string to be copied
 * Return: the value of *dest
 */
char *_strcpy(char *dest, char *src)
{
int n = 0;
while (*(src + n))
{
*(dest + n) = *(src + n);
n++;
}

*(dest + n) = '\0';

return (dest);
}
