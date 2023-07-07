#include "main.h"

/**
 * _puts - prints the strings followed by a new line
 * @str: the strings to be printed
 *
 */
void _puts(char *str)
{
int p = 0;
while (str[p] != '\0')
{
_putchar(str[p]);
p++;
}
_putchar('\n');
}
