#include "main.h"

/**
 * puts2 - prints the strings followed by a new line
 * @str: the strings to be printed
 *
 */
void puts2(char *str)
{
int c;
int len = 0;
while (str[len] != '\0')
{
len++;
}
for (c = 0; c < len; c += 2)
{
_putchar (str[c]);
_putchar ('\n');
}
}
