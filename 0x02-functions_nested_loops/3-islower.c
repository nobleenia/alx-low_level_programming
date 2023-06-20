#include "main.h"

/**
 **
 *
 */
int _islower(int c)
{
int lower_case = 'a';
int classifier = 0;
while (lower_case <= 'z')
{
if (lower_case == c)
{
classifier = 1;
lower_case++;
}
}
return (int classifier);
}
