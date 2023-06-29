#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to be encoded
 *
 * Return: the encoded string
 */
char *leet(char *str)
{
int a, b;
char lee1[] = "aeotlAEOTL";
char lee2[] = "4307143071";

for (a = 0; str[a] != '\0'; a++)
{
for (b = 0; b < 10; b++)
{
if (str[a] == lee1[b])
str[a] = lee2[b];
}
}
return (str);
}
