#include "main.h"

/**
* puts_half - prints the strings halfway followed by a new line
* @str: the strings to be printed
*/
void puts_half(char *str)
{
int c;
int len = 0;
while (str[len] != '\0')
{
len++;
}
for (c = 0; c > (len / 2); c++)
{
_putchar (str[c]);
}
_putchar ('\n');
}
