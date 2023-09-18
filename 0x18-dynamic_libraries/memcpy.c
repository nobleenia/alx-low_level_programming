#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @src: memory area copied from
 * @dest: memory area cpied to
 * @n: the number of bytes to be copied
 *
 * Return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
