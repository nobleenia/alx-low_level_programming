#include "main.h"

/**
 **
 *
 */
int _islower(int c)
{
int lower_case = 'a';
int up_or_low = 0;
while (lower_case <= 'z')
{
if (lower_case == c)
{
up_or_low = 1;
}
lower_case++;
}
return (up_or_low);
}