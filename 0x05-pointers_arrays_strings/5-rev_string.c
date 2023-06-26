#include "main.h"

/**
 * rev_string - reverses the string
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
int len = 0;
int p;

while (s[len] != '\0')
{
len++;
}
for (p = 0; p < len / 2; p++)
{
char rev = s[p];
s[p] = s[len - 1 - p];
s[len - 1 - p] = rev;
}
}
