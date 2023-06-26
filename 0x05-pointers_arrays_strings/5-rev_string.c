#include "main.h"

/**
 *
 *
 *
 */
void rev_string(char *s)
{
int len = 0;
int p;
char rev;

while (s[len] != '\0')
{
len++;
}
for (p = len - 1; p >= 0; p--)
{
rev = s[p];
}
return (rev);
}
