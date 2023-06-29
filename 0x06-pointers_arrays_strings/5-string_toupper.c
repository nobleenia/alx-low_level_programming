#include "main.h"

/**
 * string_toupper - function converts lowercases to uppercase
 * @str: the string to be converted
 *
 * Return: the converted string
 */
char *string_toupper(char *str)
{
int n;

n = 0;
while (str[n] != '\0')
{
if (str[n] >= 'a' && str[n] <= 'z')
{
str[n] = str[n] - 32;
}
i++;
}
 
return (str);
}
