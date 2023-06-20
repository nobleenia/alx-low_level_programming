#include "main.h"

/**
 **
 *
 */
int _islower(int c)
{
int lower_case = 'a';
int classifier;
while (lower_case <= 'z')
{
if (lower_case == c)
{
classifier = 1;
}
else
classifier = 0;
}
return (int classifier);
}
