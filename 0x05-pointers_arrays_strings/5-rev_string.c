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
char rev

while (s[len] != '\0')
{
len++;
}
for (p = 0; p < len / 2; p++) {
{
rev = s[p];
s[p] = s[len - 1 - p];
s[len - 1 - p] = rev;
}
}
