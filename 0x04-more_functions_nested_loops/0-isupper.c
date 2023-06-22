#include "main.h"

/**
 *
 *
 *
 */

int _isupper(int c)
{
char lower_case = 'a';
int is_upper = 1;

for (; lower_case <= 'z'; lower_case++)
{
if (c == lower_case)
{
is_upper = 0;
}
}
return (is_upper);
}
