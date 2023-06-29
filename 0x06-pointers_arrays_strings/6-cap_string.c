#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: string to be capitalized
 *
 * Return: capitalized string
 */
char *cap_string(char *str)
{
int i = 0;
while (str[i])
{
if (i == 0 || str[i - 1] == ' ' ||
str[i - 1] == '\t' || str[i - 1] == '\n' ||
str[i - 1] == ',' || str[i - 1] == ';' ||
str[i - 1] == '.' || str[i - 1] == '!' ||
str[i - 1] == '?' || str[i - 1] == '"' ||
str[i - 1] == '(' || str[i - 1] == ')' ||
str[i - 1] == '{' || str[i - 1] == '}')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
}
i++;
}
return (str);
}
