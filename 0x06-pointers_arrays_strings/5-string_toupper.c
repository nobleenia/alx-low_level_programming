#include "main.h"

/**
 * string_toupper - function converts lowercases to uppercase
 * @str: the string to be converted
 *
 * Return: the converted string
 */
char *string_toupper(char *)
{
int n;

n = 0;
while (str[n] != '\0')
{
if (str[n] >= 'a' && str[n] <= 'z')
{
str[n] = str[n] - 'a' + 'A';
}
i++;
}
return (str);
}
