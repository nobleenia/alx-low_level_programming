#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle
 * in the string haystack
 * @haystack: string to be searched
 * @needle: substring to be located
 *
 * Return: a pointer to the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *h = haystack;
char *n = needle;
while (*h == *n && *n != '\0')
{
h++;
n++;
}
if (*n == '\0')
return (haystack);
}
return (0);
}
