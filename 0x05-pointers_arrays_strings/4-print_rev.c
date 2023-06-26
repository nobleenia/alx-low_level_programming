#include "main.h"

/**
 *
 *
 *
 */
void print_rev(char *s)
{
int len;
int p = 0;
while (s[p] != '\0')
{
p++;
}
len = p;
while (s[len] > 0)
{
_putchar(s[len]);
len--;
}
_putchar('\n');
}
