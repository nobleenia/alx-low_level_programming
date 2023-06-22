#include "main.h"

/**
 *
 *
 *
 */
int _isupper(int c)
{
char lower_case = 'a';

for (; lower_case <= 'z'; lower_case++)
{
if (c == lower_case)
return (0);
else
return (1);
}

