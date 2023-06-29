#include "main.h"

/**
 * rot13 - encodes string with rot13
 * @str: string to encode
 *
 * Return: encoded string
 */
char *rot13(char *str)
{
int a, b;
char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char enc[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (a = 0; str[a] != '\0'; a++)
{
for (b = 0; in[b] != '\0'; b++)
{
if (str[a] == in[b])
{
str[a] = enc[b];
break;
}
}
}

return (str);
}
