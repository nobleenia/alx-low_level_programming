#include "main.h"

/**
 *
 *
 *
 */
void print_rev(char *s)
{
int len = 0;
int p;
while (s[len] != '\0')
{
len++;
}
 for (p = len - 1; p >= 0; p--)
{
_putchar(s[p]);
}
_putchar('\n');
}
