#include "main.h"

/**
* puts_half - prints the strings halfway followed by a new line
* @str: the strings to be printed
*/
void puts_half(char *str)
{
int c;

int n;
if (len % 2 == 0)
{
n = len / 2;
}
else
{
n = (len + 1) / 2;
}

int len = 0;
while (str[len] != '\0')
{
len++;
}
for (c = n; c > (len / 2); c++)
{
_putchar (str[c]);
}
_putchar ('\n');
}
