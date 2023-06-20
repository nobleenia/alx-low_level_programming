#include "main.h"

/**
 **
 *
 */
int _islower(int c)
{
int lower_case = 'a';

while (lower_case <= 'z')
{
if (lower_case == c)
{
return (1);
}
else
return (0);
}
}
